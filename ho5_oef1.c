#include <stdio.h>
#include <math.h>

double power(double x, int n)
{
	double p;
	p = pow(x, n);
	return p;
}

main()
{
	float x;
	int n;
	scanf("%f%d", &x, &n);
	printf("%f\n", power(x, n));
}
