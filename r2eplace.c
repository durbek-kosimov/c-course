#include <stdio.h>
#include <string.h>

int main()
{
//    char s[20] = "aaaabaaa";
    char s[20] = "My name is Vladimir";
    char *t;
    char *a;
    int i, j;

    t = strtok(s, "V");
    size_t len = strlen(t);
    printf("My name is Vladimir\n");
    printf("Enter new name: ");
    scanf("%s", a);
//    strcat(t, a);
    printf("%s\n", strcat(t, a));

    /*
    for (i = 0; s[i] != '\0'; i ++) {
        if (s[i] == 'b') {
            for (j = 0; j < 5; j ++)
                s[i+j] = 'c';
        }
    }
    printf("%s\n", s);
    */
    return 0;
}

