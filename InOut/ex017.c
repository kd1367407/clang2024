#include <stdio.h>
main()
{
	float no,mo,ao,all;
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
	all = no + mo + ao;
	printf("���ϒl��%.2f�ł�\n", all / 3);
}