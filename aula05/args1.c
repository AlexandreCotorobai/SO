#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    if(argc != 3) {
        printf("NUMERO DE ARGUMENTOS INVALIDO! (2 args)\n");
        return EXIT_FAILURE;
    }

    for(i = 0 ; i < argc ; i++)
    {
        printf("Argument %02d: \"%s\"\n", i, argv[i]);       
    }

    return EXIT_SUCCESS;
}
