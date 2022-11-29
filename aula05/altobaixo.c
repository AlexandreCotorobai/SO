#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    if(argc != 3){
        printf("Numero de argumentos invalido! (2 args)\n");
        return EXIT_FAILURE;
    }


    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int guess, number, tries = 0;

    number = rand() % (max - min + 1) + min;

    do{
        tries++;
        printf("Guess the number between %d and %d: ", min, max);
        scanf("%d", &guess);
        if(guess > number){
            printf("Too high!\n");
        }else if(guess < number){
            printf("Too low!\n");
        }else{
            printf("Correct! %d tries\n", tries);
        }


    }while(guess != number);

    return EXIT_SUCCESS;
}