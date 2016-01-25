/*Check formaat, dit programmaatje gaat checken hoe groot de fundamentele datatypen kunnen zijn*/

#include <stdio.h>

void check_size(void)
{
printf("char:%3lu byte\n", sizeof(char));
printf("short:%3lu bytes \n", sizeof(short));
printf("int:%3lu bytes\n", sizeof(int));
printf("long:%3lu bytes\n", sizeof(long));
printf("unsigned:%3lu bytes\n", sizeof(unsigned));
printf("float:%3lu bytes\n", sizeof(float));
printf("double:%3lu bytes\n", sizeof(double));
printf("long double:%3lu bytes\n", sizeof(long double));
}

main()
{
	printf("Berekening van de grootte van enkele fundamentele datatypen\n");
	check_size();
}
