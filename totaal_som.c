/* Berkening van minimum, maximum, som en gemiddelde */

#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	double x, min, max, som, gem;

	if (scanf("%lf", &x)!=1)	{
		printf("Geen data gevonden - Adieu! \n");
		exit(1);
	}
	min = max = som = gem = x; /* Voor het eerste getal wat ingelezen wordt, geldt dat het zowel minimum, maximum, gemiddelde als som is */
	printf("%6s%9s%9s%9s%12s%12s\n%6s%9s%9s%9s%12s%12s\n\n" ,
			"Teller", "Getal", "Min", "Max", "Som", "Gemidd",
			"---","---","---","---","---","---"); /* Dit zet een kop voor de tabel op het scherm */
	printf("%6d%9.1f%9.1f%9.1f%12.3f%12.3f\n",
			1, x, min, max, som, gem); /* De eerste regel van de tabel, hierbij is nog niet gesorteerd */
	for (i=2; scanf("%lf", &x) == 1; ++i) {
		if (x < min) /* Het minimum van dit moment wordt vergeleken met de zojuist ingelezen waarde voor x*/
			min = x; /* Als het minimum groter is dan x, wordt x het nieuwe minimum */
		else if (x > max) /* Hier wordt het maximum van het moment vergeleken met x, indien x al niet het minimum was */
			max = x; /* Het maximum wordt aan x gelijkgesteld als x groter is dan het maximum */ som += x; /* bij de som tot nu toe wordt x opgeteld */
		gem = som / i; /* Het gemiddelde tot nu toe is de som van alle ingelezen getallen gedeeld door het aantal getallen tot dat moment */
		printf("%6d%9.1f%9.1f%9.1f%12.3f%12.3f\n" ,
				i, x, min, max, som, gem);
	}
}
