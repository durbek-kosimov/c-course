#include <stdio.h>
#include <string.h>
int strchrn (char *, char );

int main()
{
    char email[40];
    char email2[40];

//    char *at, *punt;
    int c, c1, c2, i, n, j, k;
    int at, punt;
//    i = -1;
//    n = -1;
    at = -1;
    punt = -1;

    printf("Enter email: ");
    scanf("%s", email);
//    while ((c = getchar()) != EOF) {
//    j = strchrn(email, '@');
//    k = strchrn(email, '.');
    
    for (i = 0; email[i] == '@'; i ++)
        at ++;
    for (i = 0; email[i] == '.'; i ++)
        punt ++;
    printf("%d %d\n", at, punt);
    getchar();        
    while (email[i] != '\0') {
        if (email[i] == '@' && email[i] == '.' && j < k) {
            printf("OK\n");
            break;
        }
            
        
        else {
            printf("WRONG EMAIL\n");
            break;
        }
    }
   

    return 0;
}


int strchrn (char *s, char c) {
    int n = -1;
    int i = 0;
    while (*s) {
        n ++;
        if (*s == c) 
            return n;
        s ++;
    }
    return -1;
}
