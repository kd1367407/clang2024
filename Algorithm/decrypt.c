#include<stdio.h>
main()
{
	char s[80];
	int i;
	printf("暗号化文字列を入力>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] -= 1;
	}
	printf("復号化すると%s", &s[0]);
}