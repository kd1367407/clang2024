#include <stdio.h>
main()
{
	int e,no1,no2;
	printf("���Z�q����͂��Ă�������(1:+,2:-,3:*,4:/):");
	scanf("%d", &e);
	printf("��̐�������͂��Ă�������:");
	scanf("%d %d", &no1, &no2);

	if (e == 1) {
		printf("���ʂ�%d�ł�\n",no1+no2);
	}

	else {
		if (e == 2) {
			printf("���ʂ�%d�ł�\n", no1 - no2);
		}
		else {
			if (e == 3) {
				printf("���ʂ�%d�ł�\n", no1 * no2);
			}
			else {
				if (e == 4) {
					printf("���ʂ�%d�ł�\n", no1 / no2);
				}
				else {
					printf("���Z�q�𐳂������͂��Ă�������");
				}
			}
		}
	}
	
}