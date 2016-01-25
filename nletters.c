/*dit programma telt het aantal letters in een bestand */

#include <stdio.h>


main()
{
	char c;
	int i, cnt;
	for (i = 0; (c = getchar()) != EOF ; ++i) {
	  c;
	  if (isalpha(c))
	      ++cnt;
	}
printf("%s%d\n","Het aantal letters in dit bestand is:", cnt);
}
