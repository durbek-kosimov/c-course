#include <stdio.h>
#include <math.h>

#define LB -4
#define HB 4
#define DX 0.5
int main()
{
    float x, y;
    int n;
    int i;

    printf("\nTable of function values y = |x|\n");
    n = (HB - LB) / DX + 1;
    x = LB;
    for (i = 1; i <= n; i++)
    {
        y = fabs(x);
        printf("%4.2f   %3.2f\n", x, y);
        x += DX;
    }
    return 0;
}