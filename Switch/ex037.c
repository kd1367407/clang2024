#include<stdio.h>
main()
{
	char i;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%c", &i);
	switch (i) {
	case'+':
		printf("‰ÁZ\n");
		break;
	case'-':
		printf("Œ¸Z\n");
		break;
	case'*':
		printf("æZ");
		break;
	case'/':
		printf("œZ");
		break;
	default:
		printf("‚»‚êˆÈŠO‚Å‚·");
	}
}
