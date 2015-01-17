/* lower returns a lower case version of a char */
#include <stdio.h>

char lower(char c) 
{
	return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

int main() 
{
	char c;
	c = getchar();
	putchar(lower(c));
	return 0;
}
