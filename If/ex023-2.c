#include <stdio.h>
main()
{
	int year ;
	printf("�������͂��Ă�������:");
	scanf("%d", &year);

	if (year % 400 == 0) {
		printf("���邤�N�ł�");
	}

	else {
		if (year % 4 == 0) {
			if (year % 100 != 0) {
				printf("���邤�N�ł�");
			}
			else {
				printf("���邤�N�ł͂���܂���");
			}
		}
		else {
			printf("���邤�N�ł͂���܂���");
		}
		
	}
	
}