#include <stdio.h>
int main()
{
    int a = 0;
    while (a < 5) {
        a ++;
        break;
//        continue;
        printf("%d\n", a);
    }
    printf("%d\n", a);
    return 0;
}
