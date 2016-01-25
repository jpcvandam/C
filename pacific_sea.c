/* Opmeten van de Pacific Sea */

#include "pacific_sea.h"

main()
{
	const int pacific_sea = OPPERVL; /* in vierkante kilometers */
	double acres, vierk_mijl, vierk_voet, vierk_inch;

	printf("\n De Pacific Sea heeft een oppervlakte van\n");
	printf("%d vierkante kilometer.\n", pacific_sea);
	vierk_mijl = VIERK_MIJL_PER_VIERK_KM * pacific_sea;
	vierk_voet = VIERK_VOET_PER_VIERK_MIJL * vierk_mijl;
	vierk_inch = VIERK_INCH_PER_VIERK_VOET * vierk_voet;
	acres = ACRES_PER_VIERK_MIJL * vierk_mijl;
	printf("In andere eenheden wordt dit: \n\n");
	printf("%22.7e acres \n", acres);
	printf("%22.7e vierkante mijl \n", vierk_mijl);
	printf("%22.7e vierkante voet \n", vierk_voet);
	printf("%22.7e vierkante inch \n", vierk_inch);

}
