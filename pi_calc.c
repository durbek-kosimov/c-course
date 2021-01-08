#include <stdio.h>
int main()
{
    float x;
    int n;
    float sum;
    int i;
    printf("Calculation of sum of series 1-1/3+1/5-1/7+...\n");
    printf("Enter number of summed series $ ");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        x = (float)1 / (2 * i - 1);
        if ((i % 2) == 0)
        {
            x = -1 * x;
        }
        sum += x;
    }
    printf("Sum of series: %2.6f\n", sum);
    printf("Calculated value ");
    printf("of PI = %2.6f\n", sum * 4);
    return 0;   
}