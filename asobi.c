#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
main()
{
	int p1 = 10000, p2 = 10000, d1, d2, d3, g1, g2, max1, max2, b1, b2,a;
	char name1[80];
	char *player1;
	char name2[80];
	char *player2;
	srand(time(0));
	rand();
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	d3 = rand() % 6 + 1;
	printf("���̃Q�[���̓u���b�N�W���b�N�[���ł��B\n�T�C�R���̏o�ڂ̑傫�����������ł��B\n�������𖳂����ƏI���ɂȂ�܂��B");
	printf("\n���O����͂��Ă�������>");
	scanf("%s", &name1);
	player1 = name1;
	printf("\n���O����͂��Ă�������>");
	scanf("%s", &name2);
	player2 = name2;
	while (1) {
		g1 = 0;
		g2 = 0;
		max1 = 0;
		max2 = 0;
		b1 = 0;
		b2 = 0;
		if (p1 == 0) {
			printf("%s�̏�������������܂����B\n��s�֍s���Ă��������낵�Ă��Ă��������B", player1);
			break;
		}
		if (p2 == 0) {
			printf("%s�̏�������������܂����B\n��s�֍s���Ă��������낵�Ă��Ă��������B",player2);
			break;
		}
		printf("\n%s�̌��݂̏�������%d�ł�\n",player1, p1);
		printf("%s�̌��݂̏�������%d�ł�\n",player2, p2);
		printf("\n%s�͊|������ݒ肵�Ă�������>",player1);
		scanf("%d", &g1);
		p1 -= g1;
		printf("%s�͊|������ݒ肵�Ă�������>",player2);
		scanf("%d", &g2);
		p2 -= g2;
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		printf("%s��1�ڂ̃_�C�X��U���Ă�������(���������������Ă�������)>",player1);
		scanf("%*d;", &a);
		printf("�o���ڂ�%d�ł�", d1);
		printf("\n2�ڂ̃_�C�X��U���Ă�������(���������������Ă�������)>");
		scanf("%*d;", &a);
		printf("�o���ڂ�%d�ł�", d2);
		printf("\n3�ڂ̃_�C�X��U���Ă�������(���������������Ă�������)>");
		scanf("%*d;", &a);
		printf("�o���ڂ�%d�ł�", d3);
		max1 = d1 + d2 + d3;
		printf("\n\n%s�̏o�ڂ�%d,%d,%d�̍��v%d�ł�\n",player1, d1, d2, d3, max1);

		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		printf("\n%s��1�ڂ̃_�C�X��U���Ă�������(���������������Ă�������)>",player2);
		scanf("%*d;", &a);
		printf("�o���ڂ�%d�ł�", d1);
		printf("\n2�ڂ̃_�C�X��U���Ă�������(���������������Ă�������)>");
		scanf("%*d;", &a);
		printf("�o���ڂ�%d�ł�", d2);
		printf("\n3�ڂ̃_�C�X��U���Ă�������(���������������Ă�������)>");
		scanf("%*d;", &a);
		printf("�o���ڂ�%d�ł�", d3);
		max2 = d1 + d2 + d3;
		printf("\n\n%s�̏o�ڂ�%d,%d,%d�̍��v%d�ł�\n",player2, d1, d2, d3, max2);
		if (max1 > max2) {
			b1 = g1 * 2;
			p1 += b1;
			printf("\n���߂łƂ��I%s�̏����I��������%d�ł��I�I\n",player1, p1);
			printf("�c�O�B%s�͊|�����������܂����B��������%d�ł��B\n",player2, p2);
		}
		else {
			if (max1 < max2) {
				b2 = g2 * 2;
				p2 += b2;
				printf("\n���߂łƂ��I%s�̏����I��������%d�ł��I�I\n",player2, p2);
				printf("�c�O�B%s�͊|�����������܂����B��������%d�ł��B\n",player1, p1);
			}
			else {
				p1 += g1;
				p2 += g2;
				printf("\n���_!�|�������߂��Ă��܂��B�������V�ׂ�h���I�I\n");
			}
		}
	}
}