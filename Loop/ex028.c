#include <stdio.h>
main()
{
	int a, an;
	an = 0;
	printf("数を入力:");
	scanf("%d", &a);
	while (a != -999) {
		an += a;
		printf("数を入力:");
		scanf("%d", &a);
	}
	printf("合計は%dです", an);
}