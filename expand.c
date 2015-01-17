/*
 * expand takes shorthand notation such as a-z and 
 * gives a complete list abc...xyz
 */

#include <stdio.h>
#include <ctype.h>

#define N 100

void expand(char shorthand[], char expanded[])
{
	char start, end;
	int k = 0;
	for (int i = 0; shorthand[i] != '\0'; i++) {
		if (shorthand[i] >= 'a' && shorthand[i] <= 'z') {
			start = shorthand[i];
			end = shorthand[i+2];
			i+=2;
		} else if (isdigit(shorthand[i])) {
			start = shorthand[i];
			end = shorthand[i+2];
			i+=2;
		} else if (shorthand[i] == '-' && i != 0 && shorthand[i+1] != '\0') {
			start = end+1;
			end = shorthand[i+1];
			i+=1;
		} else {
			continue;
		}
		for (char j = start; j <= end; j++, k++)
			expanded[k] = j;
	}
	expanded[k] = '\0';
}

void print(char array[])
{
	for (int i = 0; array[i] != '\0'; i++)
		putchar(array[i]);
	putchar('\n');
}

void read(char array[])
{
	char c;
	int i;
	for (i = 0; (c = getchar()) != '\n'; i++)
		array[i] = c;
	array[i] = '\0';
}

int main()
{
	char shorthand[N], expanded[N];
	read(shorthand);
	expand(shorthand, expanded);
	print(expanded);
 	return 0;
}
