#include<stdio.h>
main()
{
	char i;
	printf("���Z�q�����:");
	scanf("%c", &i);
	switch (i) {
	case'+':
		printf("���Z\n");
		break;
	case'-':
		printf("���Z\n");
		break;
	case'*':
		printf("��Z");
		break;
	case'/':
		printf("���Z");
		break;
	default:
		printf("����ȊO�ł�");
	}
}
