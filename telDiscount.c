#include <stdio.h>
int main()
{
    int time;
    int day;
    float sum;

    printf("\nCalculation of telephone conversation price by phone\n");
    printf("Enter initial data:\n");
    printf("Duration of conversation (whole amount of minutes): ");
    scanf("%d", &time);
    printf("Day of the week");
    printf(" (1-Monday, .. 7-Sunday > ");
    scanf("%d", &day);
    sum = 0.25 * time;
    if (day == 6 || day == 7)
    {
        printf("20% Discount is provided.\n");
        sum *= 0.8;
    }
    printf("The amount of conversation is: %3.2f euro.\n", sum);
    return 0;
}
