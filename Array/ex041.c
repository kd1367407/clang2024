#include<stdio.h>
main()
{
	float g,box[3];
	int i;
	for (g = 0, i = 0; i < 3; i++) {
		printf("���������");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("���v��%.2f\n���ς�%.2f\n", g, g / 3);
}