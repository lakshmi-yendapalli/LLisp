#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <string.h>

char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer) + 1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy) - 1] = '\0';
    return cpy;
}

void add_history(char* dummy) {}

#else
#include <editline/readline.h>
// #include <editline/history.h>
#endif

int main(int argc, char** argv) {
    printf("Welcome to LLisp\n");
    printf("Press ctrl+c to exit\n");

    while (1) {
        char* input = readline("llispy>> ");
        add_history(input);
        printf("I heard: %s\n", input);
        free(input);
    }

    return 0;
}