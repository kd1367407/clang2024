#include <stdio.h>
main()
{
	int a, an;
	an = 0;
	printf("�������:");
	scanf("%d", &a);
	while (a != -999) {
		an += a;
		printf("�������:");
		scanf("%d", &a);
	}
	printf("���v��%d�ł�", an);
}