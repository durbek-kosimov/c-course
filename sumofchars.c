#include <stdio.h>
int main()
{
    char a, b, c;
    int nSum;
    scanf("%c%c%c", &a, &b, &c);
    nSum = (a - 'a') + (b -'b') + (c - 'a');
    printf("%d\n", nSum);
    printf("size of a = %d, b = %d, c = %d\n", sizeof(a), sizeof(b), sizeof(c));
    printf("size of char = %d\n", sizeof(char));
    return 0;
}
