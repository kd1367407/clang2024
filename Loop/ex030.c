#include <stdio.h>
main()
{
	int a, an;
	an = 0;
	printf("�������:");
	scanf("%d", &a);
	while (an != 10) {
		printf("%d+%d=%d\n",a,an,a+an);
		an++;
	}
	
}