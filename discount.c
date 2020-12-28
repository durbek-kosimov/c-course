#include <stdio.h>
int main()
{
    float summ;
    printf("\nCalculation of Purchace Value including Discount Value\n");
    printf("Enter the putchace value and press <Enter>\n");
    printf("> ");
    scanf("%f", &summ);
    if(summ < 500)
        printf("No discount is provided\n");
    else {
        printf("Discount is provided for you ");
        if(summ > 1000) {
            printf("5%\n");
            summ *= 0.95;
        }
        else {
            printf("3%\n");
            summ *= 0.97;
        }
        printf("Amount including discount is: %3.2f eur.\n", summ);
    }
    return 0;
}
