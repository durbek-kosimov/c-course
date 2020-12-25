#include <stdio.h>
#include <math.h>

#define f(x) (x * x -2)
#define f_prime(x) (2 * x)

int main() 
{
    float newton_raphson;
    newton_raphson = 1.4 -(f(1.4) / f_prime(1.4));

    printf("newton_raphson = %f\n", newton_raphson);
    printf("sqrt(2) = %f\n", sqrt(2));

    return 0;
}

