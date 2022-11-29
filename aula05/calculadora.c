#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    if(argc != 4) {
        printf("NUMERO DE ARGUMENTOS INVALIDO!\n");
        return EXIT_FAILURE;
    }

    //Alinea c)
    // double a = atof(argv[1]); // atof converte string para float
    // double b = atof(argv[3]); // atof converte string para float
    // char op = *(argv[2]);

    //Alinea b)
    char *endptr1, *endptr2;
    double a = strtod(argv[1], &endptr1);
    double b = strtod(argv[3], &endptr2);
    char op = *(argv[2]);


    // printf("endptr1 = %s\n", endptr1);

    //printf("ponteiro %i \n", *(argv[2]));



    double result = 0;
    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case 'x':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case 'p':
            result = 1;
            for(i = 0; i < b; i++) {
                result *= a;
            }
            break;
        default:
            printf("OPERADOR INVALIDO!\n");
            return EXIT_FAILURE;
    }
    printf("Resultado: %.3f \n", result);

    return EXIT_SUCCESS;
}
