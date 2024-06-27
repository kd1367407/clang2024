#include <stdio.h>
main()
{
	int i, nu, an;
	printf("”‚Í?");
	scanf("%d", &nu);
	for (an = 0, i = 0; nu != -999; i++) {
		an += nu;
		printf("”‚Í?");
		scanf("%d", &nu);
	}
	printf("‡Œv=%d \t •½‹Ï=%.2f\n", an, (float)an / i);
}