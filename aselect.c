/*Drukt aselecte getallen af*/

#include <stdio.h>
#include <stdlib.h>

main(){
	int i, n;

	printf("\n%s\n%s",
			"Er worden aselecte getallen afgedrukt",
			"Hoeveel getallen wenst u te zien?");
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		if (i % 6 == 0)
			putchar('\n');

		printf("%12d", rand());
		if (i == n)
			putchar('\n');
	}
}
