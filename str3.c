#include <stdio.h>
int main()
{
//    char x;
    char y[9];
    printf("Enter a string: ");
    scanf("%[^oeuai]", y);
    printf("The input was \"%s\" \n", y);
    return 0;
}
