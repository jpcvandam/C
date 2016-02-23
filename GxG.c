#include <stdio.h>
#include <stdlib.h>

/* Hoe dit werkt, wat gaat het programma doen
 * 1. lees de grondwaterstandsreeks in, bij voorkeur uit een csv
 * 2. bepaal hoe lang de reeks is, aantal jaren en aantal waarnemingen
 * dat is nodig voor zowel het toewijzen van voldoende geheugen als voor
 * het checken of de reeks lang genoeg is om een valide GxG te bepalen
 * 3. Groepeer de waarnemingen per hydrologisch jaar (1 april tot 31 mei)
 * en per 14e en 28e van de maand, of even daarvoor of na
 * 4. Sorteer deze gegroepeerde waarnemingen van klein naar groot
 * 5. neem de 3 grootste (HG3) en 3 kleinste (LG3) per hydrologisch jaar
 * 6. bereken van de gemiddelden van de LG3 en HG3 en retourneer deze.
 * 7. De resultaten moeten naar een outfile.
 *  */	
int main(int argc, char **argv)
{
	int i;
	float data_array[365], p;
	FILE *ifp;
	if (argc !=3){
		printf("\n%s%s%s\n\n%s\n",
		"Gebruik:", argv[0], " infile outfile",
		"Dit programma berekend de GxG van een grondwatertijdreeks");
		exit(1);
		}
	ifp = fopen(argv[1], "r");
	/*ofp = fopen(argc[2], "w");*/
	for (i=0; i<365; ++i)
		data_array[i]=0.0; /*Array op nul zetten*/
	
	while(EOF != fscanf(ifp, "%f\n", &p) )
	{
		for (i=0; i<365; ++i)
		data_array[i] = p;
		printf("%f\n", data_array[i]);
	}
	fclose(ifp);
	/*fclose(ofp);		*/
	return 0;
}
