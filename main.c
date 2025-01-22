#include <stdio.h>
#include <stdlib.h>

#include <readline/readline.h> //Readline library because on NixOS it is easy to download.
#include <readline/history.h>

//static char input[2048]; Variable thats starts (once) at the start of the program, with file scope.

                         
int main(int argc, char** argv){

    puts("https://github.com/glish315/Lisp-language");
    puts("Press Ctrl+c to Exit");

    while(1){
//      fputs("Lispy> " ); stdout is "standart output stream", so it's deafult output, fputs work just like fprint 
//      fgets(input, 2048, stdin); stdin is "standart input stream", read a line of input from stdin into "input" 

        char* input = readline("Lispy> ");

        add_history(input);

        printf("No you're a %s\n", input);

        free(input);
    }
    return 0;
}
