#include <stdio.h>
main()
{
	int a, an;
	an = 0;
	printf("�������:");
	scanf("%d", &a);
	while (an < a) {
		printf("*");
		a--;
	}
	
}