#include <stdio.h>
int main()
{
    int i, j;
    printf("    ");
    for (j = 1; j <= 10; j++)
    {
        printf("%4i", j);        
    }
    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%4i", i);
        for (j = 1; j <= 10; j++)
        {
            printf("%4i", i * j);
        }
        printf("\n");
    }
    return 0;
}