#include <stdio.h>

#define LB -2.0
#define HB 2.0
#define DX 0.5

int main()
{
    float x, y;
    int n;
    int i;

    n = (HB - LB) / DX + 1;
    x = LB;
    printf("---------------------\n");
    printf("    x    |    y    \n");
    printf("---------------------\n");
    for ( i = 0; i <= n; i++)
    {
        y = -2.4 * x * x + 5 * x - 3;
        printf("%6.2f   |   %6.2f\n", x, y);
        x += DX;
    }
    printf("---------------------\n");
    return 0;
}