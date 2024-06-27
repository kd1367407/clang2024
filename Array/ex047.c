#include<stdio.h>
main()
{
	int i,j;
	float a[3][2], g;
	for (i = 0; i <3; i++) {
		for (g = 0, j = 0; j < 2; j++) {
			printf("a[%d][%d]=", i, j);
			scanf("%f", &a[i][j]);
			g += a[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n", i, g/2);
	}
}