#include <stdio.h>

#define PI 3.14

int main()
{
	float r;
	scanf("%f", &r);
	float r3 = r*r*r;
	float v = (3.0f/4.0f)*PI*r3;
	printf("Volume: %.2f\n", v);
	return 0;
}

	
