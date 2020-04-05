#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

    char buf[180];
    char *tokenPtr;
    long int anum[180], sum = 0;
    int i, count = 0;
    
    printf("Enter sequence of numbers:\n");

    fgets(buf, sizeof(buf), stdin);
    tokenPtr = strtok(buf, " "); 
    anum[count] = atol(tokenPtr); 

    while (tokenPtr != NULL) {
        printf("%s\n", tokenPtr);
        anum[count] = atol(tokenPtr);
        tokenPtr = strtok(NULL, " ");
        count ++;
    } 

    for (i = 0; i < count; i ++) 
        sum += anum[i];
    
    printf ("\nsum is: %ld\n", sum);
    return 0;
}
