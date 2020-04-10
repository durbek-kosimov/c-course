#include <stdio.h>
#include <string.h>
int main()
{
    char lastname[] = "Dmitrij";
    char nickname[] = "Umnij";
    char *no = " ";

//    if (strcmp(lastname, no))
    printf("Hello, %s\n", strcmp(lastname, no) ? lastname : nickname);
//    else
//        printf("Hello %s\n", nickname);

    return 0;
}
