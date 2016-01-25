/*geeft een serie getallen uit de reeks van fibonacci */
/* Dit wordt een efficient algoritme */

#include <stdio.h>

long fibonacci (int n)
{
	long fib[100];
if (n <= 1)
	return fib[n] = n;
if (n == 2)
	return fib[n] = 1;
else
	return fib[n] = (fib[n - 1] + fib[n - 2]);
}
main(){
	int i;
	for (i = 0; i <= 65; ++i)
	printf("%d\t%ld\n", i, fibonacci(i));

}
