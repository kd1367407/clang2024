#include<stdio.h>
main()
{
	float g,box[3];
	int i;
	for (g = 0, i = 0; i < 3; i++) {
		printf("実数を入力");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("合計は%.2f\n平均は%.2f\n", g, g / 3);
}