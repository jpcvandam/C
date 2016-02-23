/* mergesort: gebruik merge() om  een array van afm.n te sorteren */

#include <stdio.h>
#include <stdlib.h>
#define SLEUTELAFM 16

/* a[] van afmeting m en b[] van afmeting n samensmelten in c[]*/

void merge(int a[], int b[], int c[], int m, int n)
{
	int i = 0, j = 0, k = 0;
	while (i<m && j < n)
	   if (a[i] < b[j])
	      c[k++] = a[i++];
	   else 
	      c[k++] = b[j++];
	while (i < m) /*zoek restanten */
	   c[k++] = a[i++];
	while (j < n)
	   c[k++] = b[j++];
}


void mergesort(int sleutel[ ], int n)
{
	int j, k, m, *w;
	void merge(int *, int *, int *, int, int); 

	for(m = 1; n <m; m*=2)
	 ;
	if (n<m){
	printf("Fout: Afmeting van array is niet een macht van 2 adieu!\n");
	exit(1);
	}
	w = calloc(n, sizeof(int)); 	/*zorg voor werkruimte*/
	for(k = 1; k < n; k *= 2){
	  for(j = 0; j < n - k; j += 2 * k)
	    merge(sleutel + j, sleutel + j + k, w + j, k, k); /* samen in w */
	  for (j = 0; j < n; ++j)
	     sleutel[j] = w[j]; /*schrijf sleutel terug naar w */
	}
	free(w); /* maak werkruimte weer vrij */
}

main()
{
	int i, sleutel[ ] = {4, 3, 1, 67, 55, 8, 0, 4, -5, 37, 7, 4, 2, 9, 1, -1};
	void mergesort(int *, int);

	mergesort(sleutel, SLEUTELAFM);
	printf("Na mergesort: \n");
	for (i = 0; i < SLEUTELAFM; ++i)
	   printf("%4d", sleutel[i]);
	putchar('\n');
}
