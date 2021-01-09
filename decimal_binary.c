#include <stdio.h>
int main()
{
    int dec;
    int v;
    int i;

    printf("Converting of Decimal number into Binary numbers\n");
    printf("Enter integer number from 0 to 255 and press <Enter>: ");
    scanf("%d", &dec);
    printf("Decimal number %d corresponds to a binary ", dec);
    v = 128;
    for (i = 1; i <= 8; i++)
    {
        if (dec >= v)
        {
            printf("1");
            dec -= v;
        }
        else
        {
            printf("0");
        }
        v /= 2;
    }
    printf("\n");
    return 0;
}