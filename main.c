#include <stdio.h>
#include <stdlib.h>


#ifdef _WIN32
#include <string.h>
static char buffer[2048];

char* readline(char* promt){
    fputs(promt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer)+1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = "\0";
    return cpy;
}

void add_history(char* unused){}

#else
#include <readline/readline.h> //Readline library because on NixOS it is easy to download.
#include <readline/history.h>
#endif

int main(int argc, char** argv){
    puts("Lisp ver 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while(1){
        char* input = readline("command");
        add_history(input);

        printf("Your command: %s\n", input);
        free(input);

    }
    return 0;
}

