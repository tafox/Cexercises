/* ranges of char, short, int, and signed and unsigned long */

#include <stdio.h>
#include <limits.h>
#include <math.h>

int main()
{
	char c = 0;
	int i = 0;
	short s = 0;
	signed long sl = 0;
	unsigned long ul = 0;
	for (unsigned long j = 2; j < pow(2, 64); j=j*2) {
		c = j;
		i = j;
		s = j;
		sl = j;
		ul = j;
		break;
		if (c < 0) {
			printf("c overflow\n");
			printf("c: %d J: %lu\n", c, j);
		}
		if (i < 0) {
			printf("i overflow\n");
			printf("i: %d J: %lu\n", i, j);
		} 
		if (s < 0) {
			printf("s overflow\n");
			printf("s: %d J: %lu\n", s, j);
		} 
		if (sl < 0 || sl == 0) {
			printf("sl overflow\n");
			printf("sl: %ld J: %lu", sl, j);
		} 
		if (ul == 0 || ul == 0) {
			printf("ul overflow\n");
			printf("ul: %lu J: %lu\n", ul, j);
		}
	}
	printf("CHAR_BIT %d\n", CHAR_BIT);
	printf("CHAR_MAX %d\n", CHAR_MAX);
	printf("UCHAR_MAX %d\n", UCHAR_MAX);
	printf("ULONG_MAX %lu\n", ULONG_MAX);
	return 0;
}
		

