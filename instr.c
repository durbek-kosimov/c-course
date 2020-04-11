#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[40] = "My name is Vladimir";
    char c;
    int i;

    i = 0;
    c = getchar();
    if (strchr(s, c) != NULL) 
        printf("true\n");
    else 
        printf("false\n");
    return 0;
}
