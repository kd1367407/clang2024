#include<stdio.h>
main()
{
	int a, max,i;
	float avr;
	max = 0;
	avr = 0;
	i = 0;
	printf("®”‚ğ“ü—Í(ctrl Z‚ÅI—¹)a>");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		max += a;
		i++;
		printf("®”‚ğ“ü—Í(ctrl Z‚ÅI—¹)a>");
	}
	printf("‡Œv=%d\t•½‹Ï=%.2f", max, (float)max / i);
}