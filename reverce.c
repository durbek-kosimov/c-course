#include <stdio.h>
#include <string.h>

int main()
{
    char *s = "My string";
    size_t len = strlen(s);
//    char *t = s;
    char *t = s + len + 1;
    printf("%s\n", t);
    getchar();
    while (t >= s) {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
    return 0;
}
