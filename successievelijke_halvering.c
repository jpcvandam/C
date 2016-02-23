/* Bepaal nulpunt door successieve halvering */

#define EPS 1e-12 /* epsilon */
#include <stdio.h>

main()
{
	double x, 
	       p(double), 
	       nulpunt(double (*)(double), double, double);
	x = nulpunt(p, 0.0, 3.0);
	printf("%s%.16f\n%s%.16f\n",
	   "Benadering van nulpunt:", x,
	   " Functiewaarde:", p(x));	
}

double nulpunt(double f(double), double a, double b)
{
	double m = (a + b) / 2.0; /* midden-punt */
	
	if (f(m) == 0.0 || b - a < EPS)
	   return m;
	else if (f(a) * f(m) < 0.0)
	   return nulpunt(f, a, m);
	else
	   return nulpunt(f, m, b);   
}

double p(double x)
{
	return (x * x * x * x * x - 7.0 * x - 3.0);
}
		


    
