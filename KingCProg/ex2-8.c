#include <stdio.h>

int main()
{
	float loan, r, pay;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &r);
	r /= 100.0;
	r /= 12;
	printf("Enter monthly payment: ");
	scanf("%f", &pay);
	loan *= 1+r;
	loan -= pay;
	printf("Balance after first payment: %.2f\n", loan);
	loan *= 1+r;
	loan -= pay;
	printf("Balance after second payment: %.2f\n", loan);
	loan *= 1+r;
	loan -= pay;
	printf("Balance after third payment: %.2f\n", loan);
	return 0;
}
