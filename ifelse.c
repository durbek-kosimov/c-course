#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a == 0)
        printf("Zero!\n");
/*    else {
        if (a < 0)
            printf("Negative!\n");
        else
            printf("Positive!\n");
    }*/
    else if (a < 0)
         printf("Negative!\n");
    else
         printf("Positive!\n");
    return 0;
}

