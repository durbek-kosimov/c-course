#include <stdalign.h>
int main()
{
    int x = 1;
    int y, i;
    printf("Table of squares\n");
    printf("----------------\n");
    printf("Number\tSquare\n");
    printf("----------------\n");
    for (i = 0; i < 10; i++)
    {
        y = x * x;
        printf("%3i\t%4i\n", x, y);
        x += 2;
    }
    printf("----------------\n");
    return 0;
}