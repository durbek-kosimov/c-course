#include <stdio.h>
#include <string.h>

int main()
{
    char email[40];

    printf("Enter email: ");
    scanf("%s", email);
    if (strchr(email, '@'))
        printf("OK\n");
    else
        printf("WRONG EMAIL\n");
    return 0;
}
