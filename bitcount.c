#include <stdio.h>

int bitcount(unsigned x)
{
	int i = 0;
	while ( x != 0) {
		x &= (x-1);
		i++;
	}
	return i;
}

int main()
{
	printf("%d", bitcount(7));
	return 0;
}
