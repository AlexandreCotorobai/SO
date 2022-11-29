#include <stdio.h>

int main(void)
{
    int i = 20;
    int *p = &i;
    int j = *p;
    printf("coisas fixes %d \n", j);

    return 0;
}
