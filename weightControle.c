#include <stdio.h>
int main()
{
    float weight;
    float height;
    float optimal;
    float divergence;

    printf("\nEnter in onw row through a space,\n");
    printf("height (sm) and weight (kg).\n");
    printf("> ");
    scanf("%f%f", &height, &weight);
    optimal = height - 100;
    if (weight == optimal)
        printf("Your weight is optimal!");
    else
    {
        if (weight < optimal)
        {
            divergence = optimal - weight;
            printf("Your need to gain %2.2f kg.\n", divergence);
        }
        else {
            divergence = weight - optimal;
            printf("You need to lose weight by %2.2f kg!\n", divergence);
        }
    }
    return 0;
}
