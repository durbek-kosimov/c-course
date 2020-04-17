#include <stdio.h>
#include <math.h>
int main()
{
    char fname[20]="spring.dat";
    float f, u, r;
    int i;
    FILE *out;

    if((out = fopen(fname, "w"))==NULL)
            printf("\nFile could not be opend.\n");
    i=1;
    for (r = -2; r<=2; r+=0.01)
    {
     u=r*r;
     f=-r;
     fprintf(out, "%d\t%f\t%f\n", i, u, f);
     i++;
    }
    fclose(out);
    return 0;
}
