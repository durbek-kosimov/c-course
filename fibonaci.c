#include <stdio.h>
int main()
{
    int n,
        c1 = 1,
        c2 = 1,
        i;
    scanf("%d", &n);
    for (i = 2; i <= n; i ++) {
        int c = c1 + c2;
        c1 = c2;
        c2 = c;
    }
    printf("%d\n", c2);
    return 0;
}

