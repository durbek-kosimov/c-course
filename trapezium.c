#include <stdio.h>
int main()
{
    float a, b;
    float dx;
    float s;
    int n;
    float x;
    float y1, y2;
    int i;

    printf("\nApproximate calculation of integral by trapezium Method\n");
    printf("Low border of segment $ ");
    scanf("%f", &a);
    printf("\nHigh border of segment $ ");
    scanf("%f", &b);
    printf("Increment of argument $ ");
    scanf("%f", &dx);
    n = (b - a) / dx;
    x = a;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        y1 = x * x + 2;
        x += dx;
        y2 = x * x + 2;
        s += (y1 + y2) * dx / 2;
    }
    printf("The value of integral: %6.3f", s);
    return 0;
}