#include <stdio.h>
#include <math.h>
//int i;
int main()
{
    int i = 0;
    while (i <= 10) {
        if (i == 5)
            continue;
        printf("%.f\n", pow(2, i));
        i ++;
    }
    return 0;
}
