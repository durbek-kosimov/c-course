#include <stdio.h>

#define L 5

int main()
{
    float a;
    int n;
     float sum;
     float avr;

     printf("\nFractional sequence processing\n");
     printf("After entering each number, press <Enter>\n");
     sum = 0;
     for (n = 1; n <= L; n++)
     {
         printf("$ ");
         scanf("%f", &a);
         sum += a;
         printf("Entered numbers: %d ", n);
         printf("Sum: %6.2f\n", sum);
     }
     avr = sum / L;
     printf("Average: %6.2f\n",avr);
     return 0;
}