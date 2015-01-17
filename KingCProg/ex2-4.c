#include <stdio.h>

#define TAX_RATE .05

int main()
{
	float in;
	printf("Enter an amount: ");
	scanf("%f", &in);
	float out = in*(1+TAX_RATE);
	printf("With tax added: %.2f\n", out);
	return 0;
}
