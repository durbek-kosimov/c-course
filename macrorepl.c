#include <stdio.h>
//#define OUT(x) printf("x is equal to %d.\n", x)
#define OUT2(x) printf(#x " is equal to %s\n", #x)
int main()
{
 int value = 123;
 OUT2(value);
 return 0;
}
