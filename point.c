#include <stdio.h>
int main()
{
    int x = 4;
    int *address_of_x;
    address_of_x = &x;
    printf("x lives at %p\n", &x);
    printf("x lives at %d\n", *address_of_x);
    return 0;
}
