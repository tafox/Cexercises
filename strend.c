/*
 * strend(s, t) returns true if t occures at the end of s else 0
 */

#include <stdio.h>

int strend(char *s, char *t) 
{
	char *tstart = t;
	for (;*s != '\0'; s++) {
		if (*s == *t) {
			for (; *s == *t;s++, t++)
				if (*s == '\0' && *t == '\0')
					return 1;
			t = tstart;
		}
	}
	return 0;
}

int main()
{
	char str1[250], str2[250];
	scanf("%s", str1);
	scanf("%s", str2);
	printf("%d\n", strend(str1, str2));
	return 0;
}
