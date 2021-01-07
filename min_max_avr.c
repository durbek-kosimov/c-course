#include <stdio.h>
int main()
{
    float a;
    int n;
    float sum;
    float avr;
    float min;
    float max;
    int i;

    printf("\nFractional sequence processing\n");
    printf("Enter the number of numbers in sequence ");
    scanf("%d", &n);
    printf("Enter sequence.\n");
    printf("After entering each number, press <Enter>\n");
    printf("$ ");
    scanf("%f", &a);
    min = a;
    max = a;
    sum = a;
    for (i = 1; i < n; i++)
    {
        printf("$ ");
        scanf("%f", &a);
        sum += a;
        if (a < min) 
            min = a;
        if (a > max) 
            max = a;
    }
    avr = sum / n;
    printf("Number of the numbers: %d\n", n);
    printf("Average: %6.2f\n", avr);
    printf("Minimum number: %6.2f\n", min);
    printf("Maximum number: %6.2f\n", max);
    return 0;
}