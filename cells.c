#include <stdio.h>
#include <math.h>
#define DIM 2
int main()
{
 FILE *Fout;
 double c[DIM], gap[DIM], L[DIM], u[DIM], rH[DIM];

 int i, k, nX, nY, n;
 Fout = fopen("cells.dat", "w");
 L[0] = 2.5;
 L[1] = 2.5;
 rH[0]=L[0]/2;
 rH[1]=L[1]/2;
 u[0] = 5.;
 u[1] = 5.;

 for(i=0; i<=DIM; i++)
    gap[i] = r[i]/u[i];
 k=0;
 n=0;
 for(nY=0; nY<=u[2]; nY++){
    c[2]=(nY-0.5)*gap[2]-rH[2];
    for(nX=0; nX<=25; nX++)
        {
         c[1]=(nX-0.5)*gap[1]-rH[1];
         k++;
         for(i=1; i<=DIM; i++)
         {
          r[i][k]=c[k];
          //fprintf(Fout, "%f\t%f\n", r, u);
         }
        }
 }
 for(n=0; n<=25; )
 return 0;
}
