#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    char s[1000] = "\0";
    for(int i = 1; i < argc; i++){
        // printf("%c", argv[i][0]);
        if(isalpha(argv[i][0])){
            strcat(s, argv[i]);
            strcat(s, " ");
        }

    }

    printf("String Alinea d) %s\n", s);
}