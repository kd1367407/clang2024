#include <stdio.h>
main()
{
	int  m;
	printf("Œ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d", &m);
	if (m == 2) {
		printf("ÅI“ú‚Í‚Q‚W“ú‚Å‚·\n");
	}
	else {
		if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) {
			printf("ÅI“ú‚Í‚R‚O“ú‚Å‚·\n");
		}
		else {
			if (m == 5 || m == 7 || m == 8 || m == 10 || m == 12 || m == 1 || m == 3) {
				printf("ÅI“ú‚Í‚R‚P“ú‚Å‚·\n");
			}
			else {
				printf("ƒGƒ‰[");
			}
		}
	}
}