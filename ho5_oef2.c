#include <stdio.h>
#include <math.h>

double vierdemacht(double d)
{
	double p;
	p = sqrt(sqrt(d));
	return p;
}

main()
{
	float d;
	scanf("%f", &d);
	printf("%f\n", vierdemacht(d));
}
