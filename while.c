#include <stdio.h>
int main()
{
    int a = 0;
    while (a < 5) {
        int b = 0;
        while (b < a) {
            b ++;
            printf("%d ", b);
            break;
        }
        a ++;
        printf("\n");
    }
    printf("%d\n", a);
    return 0;
}
