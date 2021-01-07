#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 10
#define N 3

int main()
{
    int r;
    int sum;
    float avr;
    int i, j;
    time_t t;

    srand((unsigned) time(&t));
    for (i = 1; i <= N; i++)
    {
        printf("\nRandom numbers: ");
        sum = 0;
        for (j = 1; i <= L; i++)
        {
            r = rand() % 10 + 1;
            printf("%d ", r);
            sum += r;
        }
        avr = (float)sum / L;
        printf("\nAverage: %3.2f\n", avr);
        return 0;
    }
    
}