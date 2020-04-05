#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    char buf[180];
    char *tokenPtr;

    int i, count = 0;
    double sum = 0., dnum[180];
       
    printf("Enter sequence of numbers:\n");

    fgets(buf, sizeof(buf), stdin);
    tokenPtr = strtok(buf, " "); 
    dnum[count] = atof(tokenPtr);

    while (tokenPtr != NULL) {
//        printf("%s\n", tokenPtr);
        dnum[count] = atof(tokenPtr);

        tokenPtr = strtok(NULL, " ");
        count ++;
    } 

    

    for (i = 0; i < count; i ++) 
        sum += dnum[i];
    
    printf ("\nsum is: %8.1f\n", sum);
    return 0;
}
