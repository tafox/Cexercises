/*
 * any(s1, s2) returns first occurence of any char in s2 in s1 
 */

#include <stdio.h>

#define N 30

int any(char str1[], char str2[])
{
	for (int i = 0; str1[i] != '\0'; i++) {
		for (int j = 0; str2[j] != '\0'; j++) {
			if (str1[i] == str2[j])
				return ++i;
		}
	}
	return -1;
}


void readstr(char str[])
{
	char c;
	int i;
	for (i = 0; (c = getchar()) != '\n'; i++) 
		str[i] = c;
	str[i] = '\0';
}

void printstr(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
}

int main() 
{
	char str1[N], str2[N];
	int out;
	readstr(str1);
	readstr(str2);
	out = any(str1, str2);
	printf("%d\n", out);
	return 0;
}
