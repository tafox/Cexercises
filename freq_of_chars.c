#include <stdio.h>

#define N 128
int main()
{
	char c, chars[N];
	for (int i = 0; i < N; i++)
		chars[i] = 0;
	while ((c = getchar()) != EOF) 
		chars[(int)c]++;
	for (int i = 0; i < N; i++) {
		if (chars[i] == 0)
			continue;
		char c = (char)i;	
		if (c == '\t')
			printf("\\t");
		else if (c == '\n')
			printf("\\n");
		else 
			printf("%2c", c);
		for (int j = 0; j < chars[i]; j++)
			printf("|");
		printf("\n");
	}
	return 0;
}
