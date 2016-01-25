/*geeft een serie getallen uit de reeks van fibonacci */

#include <stdio.h>

int fibonacci (int n)
{
if (n <= 0)
	return n;
else
	return (fibonacci (n - 1) + fibonacci (n - 2));
}
main(){
	int i;
	for (i = 0; i <= 50; ++i)
	printf("%d%d\n", i, fibonacci(i));

}
