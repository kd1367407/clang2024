#include<stdio.h>
main()
{
	int i,j;

	printf("”‚ğ“ü—Í");
	scanf("%d", &i);
	do {
		j = 0;
		do {
			printf(" ");
			j++;
		} while (j < i);
		printf("\n");
		i--;
	} while (i != 0);
}