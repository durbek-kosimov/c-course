#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "This is a sentence with 7 tokens.";
    char *tokenPtr;

    printf("%s\n%s\n\n%s\n",
            "The string to be tokenized is:", string,
            "The tokens are:");

    tokenPtr = strtok(string, " ");
    printf("%d\n", strlen(tokenPtr));
    while (tokenPtr != NULL) {
        printf("%s\n", strcat(tokenPtr, "  "));
//        printf("%s\n", tokenPtr);
        printf("%d\n", strlen(tokenPtr));
        tokenPtr = strtok(NULL, " ");
        printf("%s\n", tokenPtr);
    }

    return 0;
}
