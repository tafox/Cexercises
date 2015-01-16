#include <stdio.h>

int main() 
{
	char c;
	while ((c = getchar()) != EOF) {
		if (c == '\b') { 
			printf("\\b");
			continue;
		}
		if (c == '\t') {
			printf("\\t");
			continue;
		}
		if (c == '\\') {
			printf("\\\\");
			continue;
		}
		putchar(c);
	}
	return 0;
}

