#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "My string";
    char *tokenPtr;
    int n = 0;
    printf("%s\n%s\n\n%s\n",
            "The string to be tokenized is:", string,
            "The tokens are:");
 //   size_t len = strlen(s);
    tokenPtr = strtok(string, " ");
//    printf("%s\n", tokenPtr);


    while (tokenPtr != NULL) {
        ++ n;
        if (n == 2)
            printf("%s\n", tokenPtr);
        tokenPtr = strtok(NULL, "\0");
    }

    return 0;
}
