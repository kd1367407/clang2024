#include<stdio.h>
main()
{
	char s[80];
	int i;
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í>");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] -= 1;
	}
	printf("•œ†‰»‚·‚é‚Æ%s", &s[0]);
}