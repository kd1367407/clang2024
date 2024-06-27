#include<stdio.h>
main()
{
	int i,j,k,g;
	int a[2][2][3] = { { {3,4,5},{4,5,6} }, { { 2,2,3 }, { 2,5,6 } } };

	for (g=0,i = 0; i <2; i++) {
		printf("アパート%d", i+1);
		for ( j = 0; j < 2; j++) {
			printf("(%d階)", j+1);
			for (k = 0; k < 3; k++) {
				printf("%d",a[i][j][k]);
				g += a[i][j][k];
			}
			
		}
		printf("\n");
	}
	printf("合計=%d人\n", g);
}