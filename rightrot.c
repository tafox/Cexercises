#include <stdio.h>

#define N 10

void print_bits(int n);
int rightrot(int x, int n);

int main(void)
{
	int a, b;
	print_bits(8);
	print_bits(rightrot(8,4));
	return 0;
}

int rightrot(int x, int n)
{
	while (n > 0) 
	{
		if (x & 1) {
			x = (x >> 1) | (~(~0 >> 1));
		} else {
			x >>= 1;
		}
		n--;
	}
	return x;
}

void print_bits(int n)
{
	int i, bits[N];
	for (i = 0; n != 0; n /= 2, i++)
		bits[i] = n % 2;
	for (i -= 1; i >= 0; i--)
		printf("%d", bits[i]);
	printf("\n");
}
	
	
	
