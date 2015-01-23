#include <stdio.h>

#define N 10

void print_bits(int n);
int setbits(int x, int p, int n, int y);

int main(void)
{
	int a, b;
	print_bits(setbits(33,3,2,7));
	return 0;
}

int setbits(int x, int p, int n, int y)
{
	return (x & ~(~(~0 << n) << (p+1-n))) | (((~(~0 << n)) &  y) << (p+1-n));
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
	
	
	
