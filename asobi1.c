#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p1 = 10000, p2 = 10000, d1, d2, d3, g1, g2, b1, b2, i;//p�͏������Bd�̓_�C�X�Bg�͊|�����Bb�͖߂��Ă�����Bi�̓J�E���g��
	char name1[80];
	char* player1;
	char name2[80];
	char* player2;
	srand(time(0));
	rand();
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	d3 = rand() % 6 + 1;
	i = 0;
	printf("�`���`���[���ł��B10�񎎍����ď������̑����ق��������ł��B");
	printf("\n���O����͂��Ă�������>");
	scanf("%s", &name1);
	player1 = name1;
	printf("\n���O����͂��Ă�������>");
	scanf("%s", &name2);
	player2 = name2;
	while (i <= 10) {
		if (p1 <= 0) {
			printf("%s�̏�������������܂����B\n��s�֍s���Ă��������낵�Ă��Ă��������B\n", player1);
			break;
		}
		if (p2 <= 0) {
			printf("%s�̏�������������܂����B\n��s�֍s���Ă��������낵�Ă��Ă��������B\n",player2);
			break;
		}
		printf("\n%s�̌��݂̏�������%d�ł�\n", player1, p1);
		printf("\n%s�͊|������ݒ肵�Ă�������>", player1);
		scanf("%d", &g1);
		p1 -= g1;

		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		printf("\n%s�̏o�ڂ�%d,%d,%d�ł�\n", player1, d1, d2, d3);

		if (d1 != d2 != d3) {
			printf("���Ȃ��B%s��%d�����܂�\n\n", player1, g1);
			i++;
		}
		else{
			if (d1 == 1 && d2 == 1 && d3 == 1) {
				b1 = g1 * 5;
				p1 += b1;
				printf("�s���]���I�I\n%s��%d�Q�b�g�I�I\n", player1, b1);
				i++;
			}
			else {
				if (d1 == d2 == d3 && d1 != 1 && d2 != 1 && d3 != 1) {
					b1 = g1 * 3;
					p1 += b1;
					printf("�]���ځI\n%s��%d�Q�b�g�I�I\n", player1, b1);
					i++;
				}
				else {
					if (d1 <= 3 && d2 <= 3 && d3 <= 3 && d1 != d2 != d3) {
						b1 = g1 * 2;
						p1 -= b1;
						printf("�q�t�~�c\n%s��%d�����܂�\n", player1, b1);
						i++;
					}
					else {
						if (d1 == d2 || d1 == d3 || d2 == d3) {
							p1 += g1;
							printf("�ʏ�̖ځB�|�������߂��Ă��܂�\n", player1, p1);
							i++;
						}
						else {
							if (d1 >= 4 && d1 <= 6 && d2 >= 4 && d2 <= 6 && d3 >= 4 && d3 <= 6 && d1 != d2 != d3) {
								b1 = g1 * 2;
								p1 += b1;
								printf("�W�S���I\n%s��%d�Q�b�g�I�I\n", player1, b1);
								i++;
							}
							else {
								if (d1 != d2 != d3) {
									printf("���Ȃ��B%s��%d�����܂�\n\n", player1, g1);
									i++;

								}
							}
						}
					}
				}
			}
		}
		
	
		printf("\n%s�̌��݂̏�������%d�ł�\n", player2, p2);
		printf("%s�͊|������ݒ肵�Ă�������>", player2);
		scanf("%d", &g2);
		p2 -= g2;
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		printf("\n%s�̏o�ڂ�%d,%d,%d�ł�\n", player2, d1, d2, d3);
		if (d1 == 1 && d2 == 1 && d3 == 1) {
			b2 = g2 * 5;
			p2 += b2;
			printf("�s���]���I�I\n%s��%d�Q�b�g�I�I\n", player2, b2);
			i++;
		}
		else {
			if (d1 == d2 == d3 && d1 != 1 && d2 != 1 && d3 != 1) {
				b2 = g2 * 3;
				p2 += b2;
				printf("�]���ځI\n%s��%d�Q�b�g�I\n", player2, b2);
				i++;
			}
			else {
				if (d1 <= 3 && d2 <= 3 && d3 <= 3 && d1 != d2 != d3) {
					b2 = g2 * 2;
					p2 -= b2;
					printf("�q�t�~�c\n%s��%d�����܂�\n", player2, b2);
					i++;
				}
				else {
					if (d1 == d2 || d1 == d3 || d2 == d3) {
						p2 += g2;
						printf("�ʏ�̖ځB%s�Ɋ|�������߂��Ă��܂�\n", player2, b2);
						i++;
					}
					else {
						if (d1 >= 4 && d1 <= 6 && d2 >= 4 && d2 <= 6 && d3 >= 4 && d3 <= 6 && d1 != d2 != d3) {
							b2 = g2 * 2;
							p2 += b2;
							printf("�W�S���I\n%s��%d�Q�b�g�I�I\n",player2, b2);
							i++;
						}
						else {
							printf("���Ȃ��B\n%s��%d�����܂�\n", player2, g2);
							i++;
						}
					}
				}
			}
		}
	}
	if (p1 > p2) {
		printf("%s�̏����I", player1);
	}
	else {
		if (p1 < p2) {
			printf("%s�̏����I",player2);
		}
	}
}
