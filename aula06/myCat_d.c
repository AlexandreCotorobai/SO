#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man fopen
 man fgets
*/

#define LINEMAXSIZE 10 /* or other suitable maximum line size */


int main(int argc, char *argv[])
{
    FILE *fp = NULL;
    char line [LINEMAXSIZE];

    /* Validate number of arguments */
    if( argc < 2 )
    {
        printf("USAGE: %s fileName\n", argv[0]);
        return EXIT_FAILURE;
    }

    /* Open the file provided as argument */
    int number = 1;
    int complete = 1;
    for(int i = 1; i < argc; i++){
        errno = 0;
        fp = fopen(argv[i], "r");
        if( fp == NULL )
        {
            perror ("Error opening file!");
            return EXIT_FAILURE;
        }

        /* Read all the lines of the file */

        while( fgets(line, sizeof(line), fp) != NULL )
        {   
            if(complete){
                printf("%02d-> ", number); /* not needed to add '\n' to printf because fgets will read the '\n' that ends each line in the file */
            }
            printf("%s", line);

            if(line[strlen(line)-1] != '\n'){
                complete=0;
            }else{
                complete=1;
                number++;
            }
        }

        fclose(fp);
    }

    /* Read all the lines of the file */
    while( fgets(line, sizeof(line), fp) != NULL )
    {
         printf("-> %s", line); /* not needed to add '\n' to printf because fgets will read the '\n' that ends each line in the file */
    }

    fclose(fp);

    return EXIT_SUCCESS;
}