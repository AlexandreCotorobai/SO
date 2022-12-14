#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man system
 man date
*/

int main(int argc, char *argv[])
{
    char text[1024];
    FILE *fp = NULL;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    do
    {
        printf("Command: ");
        scanf("%1023[^\n]%*c", text);

        /* system(const char *command) executes a command specified in command
            by calling /bin/sh -c command, and returns after the command has been
            completed.
        */
        if (strcmp(text, "end"))
        {
            printf("\n * Command to be executed: %s\n", text);
            printf("---------------------------------\n");
            system(text);
            printf("---------------------------------\n");
            fp = fopen("command.log", "a");
            fprintf(fp, "Date: %d-%d-%d %02d:%02d:%02d | Command: %s\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec, text);
            fclose(fp); 
        }
    } while (strcmp(text, "end"));

    printf("-----------The End---------------\n");

    return EXIT_SUCCESS;
}