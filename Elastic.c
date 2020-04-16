#include <stdio.h>
#include <math.h>
double u, r, f, s, t, v, p;
int main()
{
 FILE *Fout;
 FILE *Fout2;
 FILE *Fout3;
 s = 0.;
 v = 0.;
 p = 0.;
 Fout = fopen("elastic.dat", "w");
 Fout2 = fopen("trajec.dat", "w");
 Fout3 = fopen("momenta.dat", "w");

 for(r = -3.; r <= 3.; r += 0.01)
 {
   u = (r*r);
   f = -r;
   fprintf(Fout, "%f\t%f\t%f\n", r, u, f);
 }
  for(t = 0.; t <= 12.; t += 0.01)
  {
   s = cos(t);
   v = -sin(t);
   fprintf(Fout2, "%f\t%f\t%f\n", t, s, v);
  }
  for(s = -4.; s <= 4.; s += 0.01)
  {
   p = sqrt(16.-s*s);
   fprintf(Fout3, "%f\t%f\t%f\n", s, p, -p);
  }
 fclose(Fout);
 fclose(Fout2);
 fclose(Fout3);
 return 0;
}
