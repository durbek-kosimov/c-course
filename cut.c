#include <stdio.h>
#include <string.h>
int main()
{
    char s[20] = "I am in Moscow!";
    char x[20];
    char y[20];
    int i = 0, hlen;
    size_t len;
    len = strlen(s);
    hlen = len / 2;
//    printf("%d %d\n", len, hlen);
    strncpy(x, s, hlen);
//    printf("%s\n", x);
    
    while (s[i] != '\0') {
        if (i == hlen) 
//            printf("%d %d\n", i, i - hlen);
            printf("");
            y[i-hlen] = s[i+1];
//            printf("%c", y[i-hlen]);
        i ++;
    }
//    printf("%s\n", y);
    strcat(x, y);
    printf("%s\n", s);
    printf("%s\n", x);
    return 0;
}
