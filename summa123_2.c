#include <stdio.h>
int main()
{
    int a;
    printf("Enter an integer: \n");
    scanf("%d", &a);
    printf("%d\n", (1 + a) * a / 2);
    return 0;
}
