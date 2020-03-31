#include <stdio.h>
int main()
{
    char s[20] = "Hello, World!";
    char *sp;
    int i = 20;
    int *ip;
    sp = s;
    ip = &i;
    printf("address of string s is %p\n", sp);
    printf("address of integer i is %p\n", ip);
    printf("the value of *sp is %s\n", sp);
    printf("the value of *ip is %d\n", *ip);
    printf("address of string s is %p\n", sp);
    printf("address of integer i is %p\n", &i);

    return 0;
}
