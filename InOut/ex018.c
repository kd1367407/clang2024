#include <stdio.h>
main()
{
	int no,mo,ao;
	float avr;

	printf("�O����������:");
	scanf("%d %d %d", &no, &mo, &ao);

	printf("���v��%d�ł�\n", no+mo+ao);
	avr = (no + mo + ao) / 3.0;
	printf("���ς�%.2f�ł�\n", avr);
}