//fix vertical histogram
#include <stdio.h>

#define N 20

int main() 
{
	char c;
	int counter, word_lengths[N];
	counter = 0;
	for (int i = 0; i < N; i++)
		word_lengths[i] = 0;
	while ((c = getchar()) != EOF) 
	{
		if (c != ' ' && c != '\t' && c != '\n') {
			counter++;
		} else {
			if (counter != 0) {
				word_lengths[counter]++;
				counter = 0;
			}
		}
	}
	for (int j = 20; j > 0; j--) {
		int last = -1;
		for (int i = 0; i < N; i++) {
			if (word_lengths[i] >= j) {
				if (last == -1)
					last = i;
				if (last == i) {
					printf("  _");
				} else {
					for (int k = last; k < i; k++)
						printf("  ");
					printf("_");
				}
				last = i;
			}
		}
		printf("\n");
	}
	for (int i = 1; i < N; i++) {
		if (word_lengths[i] != 0)
			printf("%3d", i);
	}
	printf("\n");
	return 0;
}
		
		
