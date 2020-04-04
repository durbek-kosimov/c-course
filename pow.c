#include <stdio.h>
int main()
{
    int x, pow, mod, i;
    scanf("%d %d %d", &x, &pow, &mod);
    int res = 1;
    for (i = 1; i <= pow; i ++) {
        res *= x;
        res %= mod;
    }
    printf("%d\n", res);
    return 0;
}
