#include <stdio.h>
#include <string.h>
//#define spacec ' ' 
//#define spaces "  " 
int main()
{
    char s[40] = "My name is Vladimir";
    char *p;
//    char pr[] = {' ', ' '};
    int c, i;
    //strcpy(p, s);
    printf("%s\n", s);
    i = 0;
    c = 0;
    while ((p[i] = s[i]) != '\0') {
        if (s[i] == 'i') 
            c ++;
        i ++;
    }

    printf("%s\n", p);
    printf("%d\n", c);
    return 0;
}
