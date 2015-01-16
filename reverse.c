#include <stdio.h>

#define N 1000

void reverse(char line[], int len)
{
	char reversed[N];
	int i, j;
	reversed[len] = '\0';
	for (i = len-1, j = 0; i >= 0; i--, j++) 
		reversed[i] = line[j];
	for (int i = 0; i < len; i++)
		line[i] = reversed[i];
}

void print_line(char line[]) 
{
	for (int i = 0; line[i] != '\0'; i++) 
		printf("%c", line[i]);
	printf("\n");
}

int main()
{
	char c, line[N];
	for (int i = 0; ((c = getchar()) != EOF); i++) {
		if (c == '\n' && i == 0) {
			printf("\n");
			i = -1;
		} else if (c == '\n') { 
			line[i] = '\0';
			reverse(line, i);
			print_line(line);
			i = -1;
		} else {
			line[i] = c;
		}
	}
	return 0;
}

