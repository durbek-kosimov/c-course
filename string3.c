/* Extraction of last (or arbitrary) character from string */

#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "My string";
 //   char b[11];
//    printf("%s\n", s);
//    printf("%d\n", strlen(s));
    size_t len = strlen(s);
    printf("%c\n", s[len-2]); // extraction of the last character
//    printf("%d\n", len);
//    s[len] += 's'; // here might be s[strlen(s)] instead
    /*
    strcpy(b, s);
    b[9] = 's';
    b[10] = '\0';
    */

    

//    printf("%d\n", strlen(b));
//    printf("%s%c\n", s, 's');
//    printf("%s\n", s);
//    printf("%d\n", strlen(s));
//    printf("%c\n", s[len]); // extraction of the last character
    return 0;
}
