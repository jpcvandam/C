/*hoofdstuk 5 oefening 9*/

#include <stdio.h>
#include <math.h>

double f(double a, double b, double c, double x)
{
	double y;
	y = a*pow(x, 2) + b*x + c;
	return y;
}

main()
{
	int i, a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	for(i=0; i <= 3; ++i){
	printf("%d\t%f\n", i, f(a,b,c,i));
	}
}
