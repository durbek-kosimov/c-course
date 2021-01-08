#include <stdio.h>
int main()
{
    int m;
    int n;
    int p;
    m = 7;
    printf("\nMultiplication table %d\n", m);
    for (n = 1; n <= 9; n++)
    {
        p = m * n;
        printf("%d x %d = %d\n", m, n, p);
    }
    return 0;
}