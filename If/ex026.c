#include <stdio.h>
main()
{
	int  m;
	printf("������͂��Ă�������:");
	scanf("%d", &m);
	if (m == 2) {
		printf("�ŏI���͂Q�W���ł�\n");
	}
	else {
		if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) {
			printf("�ŏI���͂R�O���ł�\n");
		}
		else {
			if (m == 5 || m == 7 || m == 8 || m == 10 || m == 12 || m == 1 || m == 3) {
				printf("�ŏI���͂R�P���ł�\n");
			}
			else {
				printf("�G���[");
			}
		}
	}
}