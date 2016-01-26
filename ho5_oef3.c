#include <stdio.h>

int z;

void f(int x)
{
	x=2;
	z+=x;
}
main()
{
	z = 5;
	f(z);
	printf("z= %d\n",z); /* er wordt z = 7 afgedrukt omdat x = 2 + z = 5 worden opgeteld */
}
