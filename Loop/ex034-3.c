#include<stdio.h>
main()
{
	int num,i, j;

	printf("�������");
	scanf("%d", &num);
	
	i = 1;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i);
		printf("\n");
		i++;
	} while (i <= num );
}