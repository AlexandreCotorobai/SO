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

int main (int argc, char *argv[])
{
    FILE *fp = NULL;
    int i;
    // Person p = {35, 1.65, "xpto"};
    Person p;

    /* Validate number of arguments */
    if(argc != 2)
    {
        printf("USAGE: %s fileName\n", argv[0]);
        return EXIT_FAILURE;
    }

    /* Open the file provided as argument */
    errno = 0;
    fp = fopen(argv[1], "wb");
    if(fp == NULL)
    {
        perror ("Error opening file!");
        return EXIT_FAILURE;
    }

    /* Write 10 itens on a file */
    int peoplenumber;
    printf("How many people do you want to write? ");
    scanf("%d", &peoplenumber);
    for(i = 0 ; i < peoplenumber ; i++)
    {
        printf("Person name? ");
        scanf("%s", p.name);
        printf("Penson age? ");
        scanf("%d", &p.age);
        printf("person height? ");
        scanf("%lf", &p.height);
        fwrite(&p, sizeof(Person), 1, fp);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}