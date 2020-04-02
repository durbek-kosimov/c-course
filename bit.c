#include <stdio.h>
int main()
{
    int n;
    int a = 0;
    scanf("%d", &n);
    while (a < 32) {
        printf("%d", (1 << (31 - a) & n) >> (31 - a));
        a ++;
    }
    printf("\n");
    return 0;
}
