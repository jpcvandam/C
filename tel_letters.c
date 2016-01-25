/* Telling van het aantal hoofdletters in een file*/

#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[])
{
  int c,i, letter[26];
  FILE *ifp, *ofp;
  if (argc != 3){
    printf("\n%s%s%s\n\n%s\n%s\n\n",
     "Gebruik:", argv[0], " infile outfile",
     "De hoofdletters in de infile worden geteld.",
     "De resultaten komen in outfile te staan.");
    exit(1);
}
ifp = fopen(argv[1], "r");
ofp = fopen(argv[2], "w");
for( i = 0; i <26; ++i) /*beginwaarde array op nul */
  letter[i] = 0;
while((c = getc(ifp)) != EOF)
  if(c>='A' && c <= 'Z') /* zoek de hoofdletters */
   ++letter[c - 'A'];
for (i = 0; i < 26; ++i){ /*druk resultaten af */
  if (i % 6 == 0)
   putc('\n', ofp);
   fprintf(ofp, "%c:%5d", 'A' + i, letter[i]);
  }
  putc('\n', ofp);
}
