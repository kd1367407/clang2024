#include <stdio.h>
main()
{
	int no1 = 0, no2 = 0, no3;
	printf("�b�������:");
	scanf("%d", &no3);
	
	if (no3 <= 5000,no3>0) {
		no1 = no3 / 3600;
		no3 = no3 % 3600;
		no2 = no3 / 60;
		no3 = no3 % 60;
		printf("%d����%d��%d�b�ł�\n", no1, no2, no3);
	}
	else (no3 > 5000,no3>0); {
		printf("�G���[:5000�𒴂��Ă��܂�\n");
			
	}
	if (no3 < 0) {
		printf("�G���[:�}�C�i�X�̒l�ł�\n");
	}
}