#include<stdio.h>
main()
{
	int i, j, g;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (i = 0; i <= 1; i++) {
		for (g = 0, j = 0; j <= 2; j++) {
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
			g += a[i][j];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n", i, g);
	}
}