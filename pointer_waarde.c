#include <stdio.h>

main()
{
	int i = 7, *p;
	p = &i;
	printf("%s%d\n%s%u\n",
	" Waarde van i:", *p,
	" Locatie van i:", p);
}
