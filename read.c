#include<stdio.h>
#define stop '0'
int main()
{
    int ch;
    while((ch = getchar()) != stop)
        putchar(ch);
    return 0;
}

