#include <stdio.h>
int main()
{
    int n;
    int a = 0;
    scanf("%d", &n);
    while (a < 32) {
        printf("%d", ((n >> (31 - a) & 1)));
        a ++;
    }
    printf("\n");
    return 0;
}
