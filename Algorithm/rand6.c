#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p,c;
	srand(time(0));
	rand();
	c = rand() % 3;
	printf("�����o���܂����H1:�O�[2:�`���L3:�p�[>");
	scanf("%d", &p);
	switch (p) {
	case 1:
		printf("\n�v���C���[�̓O�[�ł��B\n");
		break;
	case 2:
		printf("\n�v���C���[�̓`���L�ł��B\n");
		break;
	case 3:
		printf("\n�v���C���[�̓p�[�ł��B\n");
	}
	switch (c) {
	case 0:
		printf("�R���s���[�^�̓O�[�ł��B\n");
		break;
	case 1:
		printf("�R���s���[�^�̓`���L�ł��B\n");
		break;
	case 2:
		printf("�R���s���[�^�̓p�[�ł��B\n");
	}
	
	if (p==1 && c==1) {
		printf("\n�v���C���[�̏����ł�");
	}
	else {
		if (p == 1 && c == 2) {
			printf("\n�R���s���[�^�̏����ł�");
		}
		else {
			if (p == 2 && c == 0) {
				printf("\n�R���s���[�^�̏����ł�");
			}
			else {
				if (p == 2 && c == 2) {
					printf("\n�v���C���[�̏����ł�");
				}
				else {
					if (p == 3 && c == 0) {
						printf("\n�v���C���[�̏����ł�");
					}
					else {
						if (p == 3 && c == 1) {
							printf("\n�R���s���[�^�̏����ł�");
						}
						else {
							printf("\n�������ł�");
						}
					}
				}
			}
		}
	}
}