#include <stdio.h>
main()
{
	int e,no1,no2;
	printf("‰‰Zq‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(1:+,2:-,3:*,4:/):");
	scanf("%d", &e);
	printf("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d %d", &no1, &no2);

	if (e == 1) {
		printf("Œ‹‰Ê‚Í%d‚Å‚·\n",no1+no2);
	}

	else {
		if (e == 2) {
			printf("Œ‹‰Ê‚Í%d‚Å‚·\n", no1 - no2);
		}
		else {
			if (e == 3) {
				printf("Œ‹‰Ê‚Í%d‚Å‚·\n", no1 * no2);
			}
			else {
				if (e == 4) {
					printf("Œ‹‰Ê‚Í%d‚Å‚·\n", no1 / no2);
				}
				else {
					printf("‰‰Zq‚ğ³‚µ‚­“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
				}
			}
		}
	}
	
}