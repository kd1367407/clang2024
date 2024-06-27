#include<stdio.h>
main()
{
	float g,box[3];
	int i;
	for (g = 0, i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("‡Œv‚Í%.2f\n•½‹Ï‚Í%.2f\n", g, g / 3);
}