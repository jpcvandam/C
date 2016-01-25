/*Tabel van machten*/

#include <stdio.h>

#define N 7

long macht(int, int);
void druk_kop(void);
void druk_tabel(int);


main()
{
  druk_kop();
  druk_tabel(N);
}

void druk_kop(void)
{
  printf("\n::::: EEN TABEL VAN MACHTEN :::::\n\n");
  printf("%9s%9s%9s%9s%9s%9s%9s", "integer", "kwadraat", "3e macht", "4e macht", "5e macht", "6e macht", "7e macht\n");
}

void druk_tabel(int n)
{
  int i, j;

  for (i = 1; i <=n; ++i) {
    for (j =1; j <= n; ++j)
      if (j == 1)
        printf("%ld", macht(i, j));
      else
        printf("%9ld", macht(i, j));
    putchar('\n');
    }
}

long macht(int m, int n)
{
   int i;
   long product = 1;

   for (i = 1; i <= n; ++i)
       product *= m;
   return product;
}
