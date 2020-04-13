#include <stdio.h>
#include <string.h>

int main()
{
    char s[20] = "aaaabaaa";
    int i, j;
    for (i = 0; s[i] != '\0'; i ++) {
        if (s[i] == 'b') {
            for (j = 0; j < 5; j ++)
                s[i+j] = 'c';
        }
    }
    printf("%s\n", s);
    return 0;
}

