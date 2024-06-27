#include<stdio.h>
main()
{
	int a[10], c[10],i;
	for (i = 0; i < 10; i++) {
		a[i] = (i + 1) * 10;
	}
	for (i = 0; i < 10; i++) {
		c[i] = a[i]*2;
	}
	printf("a‚ðc‚ÉƒRƒs[\na= ");
	for (i = 0; i < 10; i++) {
		printf(" %d",a[i]);
	}
	printf("\nc= ");
	for (i = 0; i < 10; i++) {
		printf(" %d",  c[i]);
	}
}