#include <stdio.h>
#include <math.h>
int main()
{
    int x, p, mod, a;
    float R;
    scanf("%d %d %d", &x, &p, &mod);
    int res = 1;
    a = x;
    for (; p > 0; p >>= 1) {
        if (p % 2 == 1) 
            res *= a;
        a = a * a;
        res %= mod;
        a %= mod;
    }
    printf("%d\n", res);
    R = pow(x, p);
    printf("%f\n", R);
    return 0;
}
