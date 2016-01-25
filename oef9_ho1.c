/*Oefening 9 hoofdstuk 1,
 * Dit programma vraagt om je naam en leeftijd en geeft vervolgens een groet
 * en hoe oud je volgend jaar wordt
 */

#include <stdio.h>
#define MAXSTRING 100

main()
{
	int i, leeftijd, nieuwe_leeftijd;
	char c, naam[MAXSTRING];
	printf("\nGoedendag, hoe heet u?\n");
	for (i = 0; (c = getchar()) != '\n'; ++i) {
	  naam[i] = c;
	}
	printf("\nHoe oud bent u?\n");
	scanf("%d", &leeftijd);
	nieuwe_leeftijd = leeftijd + 1;
	naam[i] = '\0';
	printf("\n%s%s%s%d%s\n","Hallo ", naam, ", Het volgend jaar wordt je ", nieuwe_leeftijd, " jaar oud");
}
