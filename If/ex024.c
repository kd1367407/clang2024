#include <stdio.h>
main()
{
	char  moji;
	printf("��������͂��Ă�������:");
	scanf("%c", &moji);
	if (0x41 <= moji <= 0x5a) {
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}

}