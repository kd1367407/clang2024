#include<stdio.h>
main()
{
	int max_score, score = 0;
	char ch, name[20], max_name[20];
	FILE* fp;
	fp=fopen("score.txt", "r");
	fscanf(fp, "%s%d", &max_name, &max_score);
	fclose(fp);
	printf("�ō����_�@���O:%s �X�R�A:%d\n", max_name, max_score);
	printf("�v���C���[�������");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n", score);
		ch = getch();//getch�ŃL�[���͑҂��ɂȂ�
		if (ch == 'e') {
			break;
		}
		score++;
	}
	
	if (score > max_score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("�n�C�X�R�A�X�V");
	}
	else {
		if (score < max_score) {
			printf("�c�O�B�X�V�Ȃ炸");
		}
	}
	
}