#include <stdio.h>

int main()
{
	int line_length = 0;
	char c;
	while ((c = getchar()) != EOF) {
		line_length++;
		if (line_length > 50) {
			putchar('\n');
			line_length = 0;
			while ((c = getchar()) != EOF && c == ' ')
				;
		}
		if (c == '\n') 
			line_length = 0;
		putchar(c);
	}
	return 0;
}
