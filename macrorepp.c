#include <stdio.h>
#define OUT(x) printf(#x " is equal to %d.\n", x);
int main()
{
 int value = 123;
 OUT(value);
 return 0;
}
