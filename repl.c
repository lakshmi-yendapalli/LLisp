#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>
// #include <editline/history.h>

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