#include <stdio.h>
#include <math.h>
int main()
{
    char fname[20]="mvdf.dat";
    char fname2[20]="mvdf2.dat";
    int count, count2;
    float f, f2, v, v2, nu, nu2;
    FILE *out, *out2;

    if((out = fopen(fname, "w"))==NULL)
            printf("\nFile could not be opend.\n");
    if((out2 = fopen(fname2, "w"))==NULL)
            printf("\nFile could not be opend.\n");
    count = 1;
    nu =0.;

    for (v = 0.; v <= 6.; v += 0.05)
    {
     nu=pow(v, 4);
     f=exp(-v*v/2.);
     fprintf(out, "%d\t%f\t%f\t%f\n", count, nu, f, nu*f);
     count++;
    }

    nu2=0.;
    count2 = 1;
    for (v2 = 0.; v2 <= 6.; v2 += 0.2)
    {
     nu2=pow(v2, 4);
     f2=exp(-v2*v2/2.);
     fprintf(out2, "%d\t%f\t%f\t%f\n", count2, nu2, f2, nu2*f2);
     count2++;
    }
    fclose(out);
    fclose(out2);
    return 0;
}
