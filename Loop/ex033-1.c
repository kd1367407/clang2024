#include <stdio.h>
main()
{
	int i, nu, an;
	printf("����?");
	scanf("%d", &nu);
	for (an = 0, i = 0; nu != -999; i++) {
		an += nu;
		printf("����?");
		scanf("%d", &nu);
	}
	printf("���v=%d \t ����=%.2f\n", an, (float)an / i);
}