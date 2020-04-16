#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
 FILE *Fout;
 const int N = 1000000;
 double u, r, f, s, t, v, p;
 int i;
 srand(time(0));
  
 s = 0.;
 v = 0.;
 Fout = fopen("circle.dat", "w");
 for(i = 0; i < N; i++)
 {
     double x = rand()*2./RAND_MAX-1;
     double y = rand()*2./RAND_MAX-1;
     if(x * x + y * y == 1)
          fprintf(Fout, "%f\t%f\n", x, y);
 }
 fclose(Fout);
 return 0;
}
