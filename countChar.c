#include <stdio.h>
#include <stdlib.h>
int main(){
    long count = 0;
    while(getchar() != '-') 
        ++count;
    printf("%ld\n", count);
    return 0;
}
