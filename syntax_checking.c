#include <stdio.h>

int main()
{
	int braces, brackets;
	braces = brackets = 0;
	char c;
	while ((c = getchar()) != EOF) {
		if (c == '\'') {
			while ((c = getchar()) != EOF && c != '\'')
				;
		} else if (c == '\"') {
			while ((c = getchar()) != EOF && c != '\"')
				;
		} else if (c == '{') 
			braces++;
		else if (c == '(') 
			brackets++;
		else if (c == '}')
			braces--;
		else if (c == ')')
			brackets--;
	}
	printf("Braces: %2d Brackets: %2d\n", braces, brackets);
	return 0;
}

		
