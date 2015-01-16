#include <stdio.h>

int main() 
{
	char c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') { 
			putchar('\n');
			while ((c = getchar()) != EOF && (c == ' ' || c == '\t'))
				;
		}
		if (c == '\n')
			continue;
		putchar(c);
	}
	return 0;
}
