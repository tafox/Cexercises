/*
 * mystrncpy(s,t,n) copy at most n chars from t to s
 * mystrncat(s,t,n) concatenate at most n chars from t onto s
 * mystrncmp(s,t,n) compare at most n char from t and s
 */

#include <stdio.h>

char *mystrncpy(char *s, char *t, int n) 
{
	char *sstart = s;
	for (int i = 0; i < n; i++, s++, t++) {
		if (*t == '\0') {
			*s = '\0';
			t--;
		} else {
			*s = *t;
		}
	}
	*s = '\0';
	return sstart;
}

char *mystrncat(char *s, char *t, int n) 
{
	char *sstart = s;
	for (; *s != '\0'; s++)
		;
	for (int i = 0; i < n && *t != '\0'; i++, s++, t++) 
		*s = *t;
	*s = '\0';
	return sstart;
}

int mystrncmp(char *s, char*t, int n)
{
	int i;
	for (i = 0; i < n && *s == *t; i++, s++, t++ ) {
		if (*s == '\0' && *t == '\0') {
			return 0;
		}	
	}
	if (*s == '\0') {
		return '\0' - *t;
	} else if (*t == '\0') {
		return *s;
	}
	return *(s+i)-*(t+i);
}

int main() 
{
	char str1[250], str2[256];
	int n;
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d", &n);
	//printf("strncpy: %s\n", mystrncpy(str1, str2, n));
	//printf("strncat: %s\n", mystrncat(str1, str2, n));
	printf("strncmp: %d\n", mystrncmp(str1, str2, n));
	return 0;
}

		
		
	


		

