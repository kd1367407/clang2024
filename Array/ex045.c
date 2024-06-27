#include<stdio.h>
main()
{
	int i, g;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (g = 0, i=0; i <= 2; i++) {
		printf("a[0][%d]=%d\n", i, a[0][i]);
		g += a[0][i];
	}
	printf("0行目の合計=%d\n", g);
	for (g = 0, i = 0; i <= 2; i++) {
		printf("a[1][%d]=%d\n", i, a[1][i]);
		g += a[1][i];
	}
	printf("1行目の合計=%d", g);
}