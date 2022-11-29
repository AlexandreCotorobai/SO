#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
    char s[1000];
    for(int i = 1; i < argc; i++){

        strcat(s, argv[i]);
        strcat(s, " ");
    }

    printf("String alinea c): %s\n", s);
}