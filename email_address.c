#include <stdio.h>
#include <string.h>

main()
{
    char email[40];
    char *at, *punt;
    char c1 = '@';
    char c2 = '.';
    int indexat, indexpunt, atcount, i;
    size_t len;
    atcount = 0;

    printf("Enter your email: ");
    scanf("%s", email);
    len = strlen(email);
//    printf("strlen is %d\n", len);
//    do {

//    } while (++ atcount < 2);
  
    for (i = 0; i < len; i ++) {
        if (email[i] == '@') {
            at = strchr(email, '@');

            atcount ++;
        }
//        if (atcount > 1)
//            break;
    }

    

    printf("atcount = %d\n", atcount);
/*    
    printf("at = %d\n", (int)at);
    printf("email = %d\n", (int)email); */
    printf("at - email = %d\n", (int)(at - email));
    
    punt = strrchr(email, '.');
/*    
    printf("punt = %d\n", (int)punt);
    printf("email = %d\n", (int)email);
    printf("punt - email = %d\n", (int)(punt - email));
*/    
    indexat = (int)(at - email);
    indexpunt = (int)(punt - email);

    if ((indexpunt - indexat) == 1 || (indexat - indexpunt) == 1) {
        printf("WRONG EMAIL!\n");
        return -1;
    }
//    printf("at = %d, punt = %d\n", indexat, indexpunt);

    if (indexat < indexpunt && indexpunt < len && indexat != 0 && atcount == 1)
        printf("OK\n");
    else
        printf("WRONG EMAIL!\n");
    return 0;
}
