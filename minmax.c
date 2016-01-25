#include <stdio.h>

main() /* De main-loop, hier gebeurt het, maar er worden functies gebruikt die in andere loops later in het programma staan */
{
	int i, n;
	float min, max, x;
	float minimum(float, float), maximum(float, float);
	void prn_info(void);

	prn_info(); /* informatie afdrukken */
	printf("Geef n:");
	scanf("%d", &n);
	printf("\nGeef %d real getallen:", n);
	scanf("%f", &x);
	min = max = x;
	for (i = 2; i <= n; ++i) {
		scanf("%f", &x);
		min = minimum(min, x);
		max = maximum(max, x);
	}
	printf("\n%s%.3f\n%s%.3f\n\n",
			"Minimum waarde:", min,
			"Maximum waarde:", max);
}
void prn_info(void)
{
	printf("\n%s\n%s\n%s\n\n",
			"Dit programma vraagt om een integer-waarde voor n",
			"en behandeld daarna n real getallen om daarvan",
			"het minimum en het maximum te vinden.");
}
float minimum(float x, float y)
{
	if (x < y)
		return x;
	else
		return y;
}
float maximum(float x, float y)
{
	if (x > y)
		return x;
	else
		return y;
}
