#include <stdio.h>

void iprintf(void);

int main ()
{
//    int a, b;

/*
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b);
*/
//    a = iprintf();
//    printf("%d\n", a);
//    b = iprintf();

    printf("%d\n", iprintf() + iprintf());

    return 0;
}

void iprintf() 
{
    int x;
    scanf("%d", &x);
 //   printf("%d\n", x + y);
}

