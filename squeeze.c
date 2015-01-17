/*
 * squeeze(s1, s2) deletes any characters in s2 from s1
 */

#include <stdio.h>

#define N 30

void squeeze(char s1[], char s2[])
{
	int i, j;
	int instr = 0;
	for (i = j = 0; s1[i] != '\0'; i++) {
		for (int k = 0; s2[k] != '\0'; k++) {
			if (s1[i] == s2[k]) 
				instr = 1;
		}
		if (!instr) {
			s1[j++] = s1[i];
		}
		instr = 0;
	}
	s1[j] = '\0';
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
	readstr(str1);
	readstr(str2);
	squeeze(str1, str2);
	printstr(str1);
	return 0;
}
