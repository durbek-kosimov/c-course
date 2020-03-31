#include <stdio.h>
#include <math.h>
int main()
{
 //const double e =
 FILE *Fout;
 double u, r;
 Fout = fopen("lj2.dat", "w");
 for(r = 0.9; r <= 3.5; r += 0.001)
 {
  u = 4 * (pow(r, -12) - pow(r, -6));
  fprintf(Fout, "%f\t%f\n", r, u);
 }
 return 0;
}
