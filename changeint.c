#include <stdio.h>
int main()
{
    int a, b;
    a = 3;
    b = 5;
    printf("before: a = %d, b = %d\n", a, b);
    a += b;
    b = a - b;
    a = a - b;
    printf("after: a = %d, b = %d\n", a, b);
    return 0;
}

