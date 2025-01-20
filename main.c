#include <stdio.h>

static char input[2048]; //Variable thats starts (once) at the start of the program, with file scope.

                         
int main(int argc, char** argv){

    puts("https://github.com/glish315/Lisp-language");
    puts("Press Ctrl+c to Exit");

    while(1){
        printf("Lispy> ");
//        fputs("Lispy> " ); stdout is "standart output stream", so it's deafult output (In this case allow user to write and then pass that to stdin)
        fgets(input, 2048, stdin); //stdin is "standart input stream", so it's deafult input (In this case take output form stidin and assined that to input variable)

        printf("No you're a %s", input);
    }
    return 0;
}
