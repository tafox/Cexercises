/* function that converts hexadecimal numbers to decimal */

#include <stdio.h>
#include <math.h>

#define N 100

void htoi(char hex[]) 
{
	int i, dec[N];
	for (i = 0; hex[i] != '\0'; i++) {
		switch (hex[i]) {
			case 'a':
			case 'A':
				dec[i] = 10;
				break;
			case 'b':
			case 'B':
				dec[i] = 11;
				break;
			case 'c':
			case 'C':
				dec[i] = 12;
				break;
			case 'd':
			case 'D':
				dec[i] = 13;
				break;
			case 'e':
			case 'E':
				dec[i] = 14;
				break;
			case 'f':
			case 'F':
				dec[i] = 15;
				break;
			default:
				dec[i] = hex[i] - '0';
				break;
		}
	}
	i--;
	int value = 0;
	for (int j = 0; i >= 0; j++, i--) 
		value += pow(16,i) * dec[j];
	printf("Value: %d", value);
}


void read_hex(char hex[])
{
	char c;
	int i;
	for (i = 0; (c = getchar()) != '\n'; i++) {
		if (c == '0' && i == 0) {
			c = getchar();
			i--;
		} else 
			hex[i] = c;
	}
	hex[i] = '\0';
}

int main()
{
	char hex[N];
	read_hex(hex);
	htoi(hex);
	return 0;
}
	

