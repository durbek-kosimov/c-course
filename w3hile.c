#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 10) {
        i ++;
//        printf("%d\n", (10 - i) * i);
        printf("%d\n", (10 - i) * (10 - i));
//        i ++;
    }
    return 0;
}

