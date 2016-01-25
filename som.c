/* lees twee getallen in en druk hun som af */

#include <stdio.h>

main()
{
  int a, b, som;

  printf("Geeft twee gehele getallen:");
  scanf("%d%d", &a, &b);
  som = a + b;
  printf("%d + %d = %d\n", a, b, som); 
}
