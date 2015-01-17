#include <stdio.h>

int main()
{
	int dollars, twenty, ten, five, one;
	printf("Enter a dollar amount: ");
	scanf("%d", &dollars);
	twenty = dollars/20;
	dollars -= twenty*20;
	ten = dollars / 10;
	dollars -= ten*10;
	five = dollars/5;
	dollars -= five*5;
	one = dollars;
	printf("$20 bills: %d\n$10 bill: %d\n$5 bills: %d\n $1 bill: %d\n",twenty,ten,five,one);
	return 0;
}


	
