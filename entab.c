#include <stdio.h>

#define TAB 4

int main()
{
	char c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			int spaces = 1;
			for (;(c = getchar()) != EOF && c == ' ';) {
				spaces++;
				if (spaces == TAB) {
					putchar('\t');
					spaces -= TAB;
				}
			}
			for (;spaces > 0; spaces--) 
				putchar(' ');
			putchar(c);
		} else {
			putchar(c);
		}
	}
	return 0;
}
