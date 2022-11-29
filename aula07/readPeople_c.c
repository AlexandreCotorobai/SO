#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef struct
{
    int age;
    double height;
    char name[64];
} Person;

void printPersonInfo(Person *p)
{
    printf("Person: %s, %d, %f\n", p->name, p->age, p->height);
}

int main(int argc, char *argv[])
{
    FILE *fp = NULL;
    Person p;
    Person pArr[100];
    int i = 0;

    /* Validate number of arguments */
    if (argc != 2)
    {
        printf("USAGE: %s fileName\n", argv[0]);
        return EXIT_FAILURE;
    }

    /* Open the file provided as argument */
    errno = 0;
    fp = fopen(argv[1], "rb");
    if (fp == NULL)
    {
        perror("Error opening file!");
        return EXIT_FAILURE;
    }

    /* read all the itens of the file */
    while (fread(&p, sizeof(Person), 1, fp) == 1)
    {
        printPersonInfo(&p);
        pArr[i] = p;
        i++;
    }

    fclose(fp);

    char c;
    int peoplenumber;

    printf("%d Wanna add more people? (y/n)\n", i);
    scanf("%c", &c);


    if (c == 'y')
    {
        

        printf("How many people do you want to write? ");
        scanf("%d", &peoplenumber);

        for ( int j = 0; j < peoplenumber; j++)
        {
            printf("Person name? ");
            scanf("%s", p.name);
            printf("Penson age? ");
            scanf("%d", &p.age);
            printf("person height? ");
            scanf("%lf", &p.height);
            pArr[i] = p;
            i++;
        }

        
        fp = fopen(argv[1], "wb");
        if (fp == NULL)
        {
            perror("Error opening file!");
            return EXIT_FAILURE;
        }
        //write in file
        for (int j = 0; j < i; j++)
        {
            fwrite(&pArr[j], sizeof(Person), 1, fp);
        }
        fclose(fp);
    }

    return EXIT_SUCCESS;
}
