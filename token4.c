#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "My string";
    char *tokenPtr;
    int n;
    printf("%s\n%s\n\n%s\n",
            "The string to be tokenized is:", s,
            "The tokens are:");
    size_t len = strlen(s);
    for (n = 0; n < len - 1; n ++) 
        printf("%c", s[n]);
    printf("\n");
    /*
    tokenPtr = strtok(string, " ");
//    printf("%s\n", tokenPtr);


    while (tokenPtr != NULL) {
        ++ n;
        if (n == 2)
            printf("%s\n", tokenPtr);
        tokenPtr = strtok(NULL, "\0");
    }
*/
    return 0;
}
