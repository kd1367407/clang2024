#include<stdio.h>
main()
{
	int nu, an,i;
	an = 0;
	printf("数を入力");
	scanf("%d", &nu);
	for (i = 1; i <= 5; i += 1) {
		an =i*nu;
		printf("%dの倍数五つ=%d\n", nu, an);
	}
}