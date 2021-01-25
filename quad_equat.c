#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float x1, x2;
    float d;

    printf("Solving quadratic equation\n");
    printf("Enter in one row the values of coefficients ");
    printf("and press <Enter>\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0.) {
        x1 = -c/b;
        printf("x = %3.2f\n", x1);
    }
    else {
        d = b*b - 4*a*c;
        if(d < 0)
            printf("Equation does not have solutions\n");
        else {
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            printf("x1 = %3.2f, x2 = %3.2f\n", x1, x2);
        }
    }
    return 0;
}
