#include <stdio.h>
#include <string.h>
int main()
{
    char lastname[] = " ";
    char nickname[] = "Umnij";
    char *no = " ";

    printf("Hello, %s\n", strcmp(lastname, no) ? lastname : "GUEST");

    return 0;
}
