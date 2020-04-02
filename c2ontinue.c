#include <stdio.h>
int main()
{
    int a = 0;
    while (a < 5) {
        int b = 0;
        while (b < a) {
            b ++;
            continue;
            printf("%d ", b);
//            break;
        }
        a ++;
//        break;
//        continue;
        printf("\n");
    }
//    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
