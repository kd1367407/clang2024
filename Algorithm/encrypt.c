#include<stdio.h>
main()
{
	char s[80];
	int i;
	printf("ï∂éöóÒÇì¸óÕ>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += 1;
	}
	printf("à√çÜâªÇ∑ÇÈÇ∆%s", &s[0]);
}