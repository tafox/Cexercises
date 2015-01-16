#include <stdio.h>

int main()
{
	char a, c;
	while ((c = getchar()) != EOF) {
		if (c == '/') {
			c = getchar();
			if (c  == '/') {
				while ((c = getchar()) != EOF) {
					if (c == '\n') {
						putchar(c);
						break;
					}
				}
			} else if (c == '*') {
				while ((c = getchar()) != EOF) {
					if (c == '\n') 
						putchar(c);
					if (c == '*') {
						c = getchar();
						if (c == '/') 
							break;
					}
				}
			}
		} else if (c == '\"') {
			putchar(c);
			while ((c = getchar()) != EOF && c != '\"') {
				if (c == '\\') {
					putchar(c);
					c = getchar();
				}
				putchar(c);
			}
			putchar(c);
		} else if (c == '\'') {
			putchar(c);
			while ((c = getchar()) != EOF && c != '\'') {
				if (c == '\\') { 
					putchar(c);	
					c = getchar();
				}
				putchar(c);
			}		
			putchar(c);
		} else {
			putchar(c);
		}
	}
	return 0;
}
