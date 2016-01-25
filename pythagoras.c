/*Dit programma berekend de lange zijde
 * van een rechthoekige driehoek mbv de stelling van pythagoras*/

#include <stdio.h>
#include <math.h>


int pythagoras(int a, int b)
{
	int c_kwadraat, c;
	c_kwadraat = pow(a,2) + pow(b,2);
	c = sqrt(c_kwadraat);
	return c;
}

main()
{
	printf("\n%s\n%s\n", "Geef een waarde voor a en b, gescheiden door een spatie",
				"Het resultaat is dan de lengte van de lange zijde");
	int a , b;
	scanf("%d%d", &a, &b);
	printf("de lange zijde heeft lengte: %d \n", pythagoras(a, b));
}
