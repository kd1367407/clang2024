#include <stdio.h>
main()
{
	int a, an;
	an = 0;
	printf("”‚ğ“ü—Í:");
	scanf("%d", &a);
	while (a != -999) {
		an += a;
		printf("”‚ğ“ü—Í:");
		scanf("%d", &a);
	}
	printf("‡Œv‚Í%d‚Å‚·", an);
}