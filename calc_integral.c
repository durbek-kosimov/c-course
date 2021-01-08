#include <stdio.h>
int main()
{
    float a, b;
    float dx;
    float s;
    int n, i;
    float x, y;
    printf("\nApproximate calculation of integral\n");
    printf("Low border $ ");
    scanf("%f", &a);
    printf("High border $ ");
    scanf("%f", &b);
    printf("Increment of argument $ ");
    scanf("%f", &dx);
    n = (b - a) / dx + 1;
    x = a;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        y = x * x + 2;
        s += y * dx;
        x += dx;
    }
    printf("The value of integral: %6.3f\n", s);
    return 0;
}