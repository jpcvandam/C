#include <stdio.h>

#define HEIGHT 17
#define OFFSET "                 " /*17 spaties*/
#define OFFSET16 "                " /*16 spaties*/
#define OFFSET15 "              " /*15 spaties*/
#define OFFSET14 "             " /*14 spaties*/
#define OFFSET13 "            " /*13 spaties*/
#define OFFSET12 "           " /*12 spaties*/
#define OFFSET11 "          " /*11 spaties*/
#define OFFSET10 "         " /*10 spaties*/
#define OFFSET9  "        " /*9 spaties*/
#define OFFSET8  "       " /*8 spaties*/

main()
{
	int i;
	printf("\n\n\n%s1111111\n", OFFSET);
	for (i=0; i <= HEIGHT; ++i)
		printf("%s 111 \n", OFFSET);
	printf("%s1111111\n", OFFSET);

	printf("\n\n\n%s1111111\n", OFFSET);
	printf("%s 111 \n", OFFSET);
	printf("%s 111 \n", OFFSET16);
	printf("%s 111 \n", OFFSET14);
	printf("%s 111 \n", OFFSET14);
	printf("%s 111 \n", OFFSET12);
	printf("%s 111 \n", OFFSET12);
	printf("%s 111 \n", OFFSET10);
	printf("%s 111 \n", OFFSET10);
	printf("%s 111 \n", OFFSET8);
	printf("%s 111 \n", OFFSET8);
	printf("%s 111 \n", OFFSET8);
	printf("%s 111 \n", OFFSET9);
	printf("%s 111 \n", OFFSET10);
	printf("%s 111 \n", OFFSET11);
	printf("%s 111 \n", OFFSET12);
	printf("%s 111 \n", OFFSET13);
	printf("%s 111 \n", OFFSET14);
	printf("%s 111 \n", OFFSET15);
	printf("%s 111 \n", OFFSET16);
	printf("%s 111 \n", OFFSET);
	printf("%s1111111\n", OFFSET);

}
