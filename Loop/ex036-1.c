#include<stdio.h>
main()
{
	int i;
	printf("breaktest program\n");
	for (i = 1; i<=10; i++) {
		if (i %2!=0) {
			continue;
		}
		printf("%3d", i);
	}
}