#include <stdio.h>

int main()
{
	char c;
	int tabs, spaces, newlines;
	tabs = spaces = newlines = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			newlines++;
			continue;
		}
		if (c == '\t') {
			tabs++;
			continue;
		}
		if (c == ' ') {
			spaces++;
			continue;
		}
	}
	printf("Spaces: %d Newlines: %d Tabs: %d\n", spaces, newlines, tabs);
	return 0;
}
