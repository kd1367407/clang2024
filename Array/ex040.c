#include<stdio.h>
main()
{
	int i, a[5];
	for (i = 0; i <5; i++) {
		a[i] = (i + 1) * 10;
	}
	
	for (i = 0; i <5; i++) {
		printf("a[%d]=%d\n", i, a[i]);
	}
}