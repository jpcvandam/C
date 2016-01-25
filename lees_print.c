#include <stdio.h>
main()
{
	char c1, c2, c3;
	int i;
	float x;
	double y;

	printf("\nGeef drie karakters,\n een int, een float en een double: ");
	scanf("%c%c%c%d%f%lf", &c1, &c2, &c3, &i, &x, &y);
	printf("\nHier volgen de data die u net heeft ingevoerd:\n");
	printf("%3c%3c%3c%5d%17e%17e\n\n", c1, c2, c3, i, x, y);
}
