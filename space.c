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
    while ((p[i] = s[i]) != '\0') {
        if (s[i] == ' ') 
            p[i] = '\t';
        i ++;
    }

    printf("%s\n", p);
    return 0;
}
