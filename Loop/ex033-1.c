#include <stdio.h>
main()
{
	int i, nu, an;
	printf("数は?");
	scanf("%d", &nu);
	for (an = 0, i = 0; nu != -999; i++) {
		an += nu;
		printf("数は?");
		scanf("%d", &nu);
	}
	printf("合計=%d \t 平均=%.2f\n", an, (float)an / i);
}