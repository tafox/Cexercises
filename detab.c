#include <stdio.h>

int main()
{
	char c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			for (int i = 0; i < 4; i++)
				printf(" ");
		} else {
			putchar(c);
		}
	}
	return 0;
}
