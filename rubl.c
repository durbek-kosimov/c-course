#include <stdio.h>
int main()
{
    int n;
    int r;
    printf("Enter integer number not bigger than 999 ");
    scanf("%d", &n);
    printf("%d ", n);
    if (n > 100)
    {
        r = n % 100;
    }
    else
    {
        r = n;
    }
    if (r >= 11 && r <= 14)
    {
        printf("rubley\n");
    }
    else
    {
        r %= 10;
        if (r >= 2 && r <= 4)
        {
            printf("rublya\n");
        }
        else if (r == 1)
        {
            printf("rubl\n");
        }
        else
        {
            printf("rubley\n");
        }
    }
    return 0;   
}