#include <stdio.h>
main()
{
	float no,mo,ao;
	printf("����������:");
	scanf("%f", &no);
	printf("���͒l��%.2f�ł�\n", no);
	printf("��ڂ̎���������:");
	scanf("%f", &mo);
	printf("���͒l��%.2f�ł�\n", mo);
	printf("�O�ڂ̎���������:");
	scanf("%f", &ao);
	printf("���͒l��%.2f�ł�\n", ao);
	printf("���v��%.2f�ł�\n", no + mo+ao);
	printf("���ϒl��%.2f�ł�\n", (no+mo+ao)/ 3);
}