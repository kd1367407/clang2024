#include<stdio.h>
main()
{
	int nu, an,i;
	an = 0;
	printf("�������");
	scanf("%d", &nu);
	for (i = 1; i <= 5; i += 1) {
		an =i*nu;
		printf("%d�̔{���܂�=%d\n", nu, an);
	}
}