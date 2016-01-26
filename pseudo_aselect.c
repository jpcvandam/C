/* genereren van pseudo aselecte getallen */
#include <stdio.h>

#define BEGIN_SEED 17
#define MULTIPLIER 25173
#define TOENAME 13849
#define MODULUS 65536
#define FLOATING_MODULUS 65536.0

static int seed = BEGIN_SEED; /* extern */
	/*maar prive voor deze file*/
int random(void)
{
	seed = (MULTIPLIER * seed + TOENAME) % MODULUS;
	return seed;
}

double kans(void)
{
	seed = (MULTIPLIER * seed + TOENAME) % MODULUS;
	return (seed / FLOATING_MODULUS);
}

main()
{
	int seed1,i;
	double seed2;
    for(i=0; i<=20; ++i){	
	seed1 = random();
	seed2 = kans();
	printf("%d\n", seed1);
	printf("%f\n", seed2);
	}
}
