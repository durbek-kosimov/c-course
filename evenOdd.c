#include <stdio.h>
int main()
{
    int n;
    printf("\nEnter integer number and press <Enter>\n");
    printf("> ");
    scanf("%d", &n);
    printf("The number %d ", n);
    if (n % 2 == 0)
        printf("even.\n");
    else
        printf("odd.\n");
    return 0;
}
