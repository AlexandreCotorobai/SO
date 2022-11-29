#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){

    char *sortOrder = getenv("SORTORDER");
    int i, j;
    char auxiliar[100];
    
   printf("%c\n", *sortOrder);
    if(sortOrder == NULL){
        printf("SORTORDER not defined!\n");
        return EXIT_FAILURE;
    }

    
    if (strcmp(sortOrder, "0") == 0)
    {
        printf("Ordem crescente\n");

        for (i = 1; i < argc - 1; i++)
        {
            for (j = i + 1; j < argc - 1; j++)
            {
                if (strcmp(argv[i], argv[j]) > 0)
                {
                    strcpy(auxiliar, argv[i]);
                    strcpy(argv[i], argv[j]);
                    strcpy(argv[j], auxiliar);
                }
            }
        }
    }
    else
    {
        printf("Ordem decrescente\n");
        for (i = 1; i < argc - 1; i++)
        {
            for (j = i + 1; j < argc - 1; j++)
            {
                if (strcmp(argv[i], argv[j]) < 0)
                {
                    strcpy(auxiliar, argv[i]);
                    strcpy(argv[i], argv[j]);
                    strcpy(argv[j], auxiliar);
                    i = 0;
                }
            }
        }
    }
    for (i = 1; i < argc; i++)
    {
        if (isalpha(argv[i][0]))
        {
            printf("%s\n", argv[i]);
        }
    }


}