#include <stdio.h>

#define N 1000

void print_line(char line[])
{
	for (int i = 0; line[i] != '\0'; i++)
		putchar(line[i]);
	printf("\n");
	for (int i = 0; i < N; i++)
		line[i] = '\0';
}

int main()
{
	char c, line[N];
	int count = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n' && count <= 80) {
			count = 0;
		} else if (count > 80) {
			for (;(c = getchar()) != EOF && c != '\n'; count++)
				line[count] = c;
			print_line(line);
			count = 0;
		} else {
			line[count] = c;
			count++;
		}
	}
	return 0;
}
		
