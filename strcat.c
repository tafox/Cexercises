/*
 * mystrcat(s,t) concatenatas t onto s
 */

#include <stdio.h>

char *mystrcat(char *s, char *t)
{
	char *ret = s;
	for (;*s != '\0'; s++)
		;
	for (;*t != '\0'; s++, t++) 
		*s = *t;
	*s = '\0';
	return ret;
}
		
		
	

int main()
{
	char str1[256];
	char str2[256];
	scanf("%s", str1);
	scanf("%s", str2);
	printf("%s\n", mystrcat(str1, str2));
	return 0;
}
