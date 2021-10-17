#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    double r, s;
    r = atof(argv[1]);
    s = cos(r);
    printf("cos(%g) = %g\n", r, s);
    return 0;
}
