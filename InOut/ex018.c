#include <stdio.h>
main()
{
	int no,mo,ao;
	float avr;

	printf("O‚Â®”‚ğ“ü‚ê‚Ä:");
	scanf("%d %d %d", &no, &mo, &ao);

	printf("‡Œv‚Í%d‚Å‚·\n", no+mo+ao);
	avr = (no + mo + ao) / 3.0;
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", avr);
}