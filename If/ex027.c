#include <stdio.h>
main()
{
	char a;
	printf("���������:");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z') {
		printf("�ϊ������%c", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("�ϊ������%c", a - 0x20);
		}
		else {
			printf("�G���[");
		}
	}
}