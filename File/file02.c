#include<stdio.h>
main()
{
	FILE* fp;
	char str[256], ch, equip[100];
	int lv, hp;
	int i;
	fp = fopen("file02.txt", "r");
	for (i = 0; i < 3; i++) {
		fscanf(fp, "%s", str);
		printf("%d:%s\n", i, str);
	}
	fscanf(fp, "%d,%d,%s", &lv, &hp, equip);//���str���g�����̂Ŏ��̓ǂݎ��͎O�s�ڂ���
	printf("lv:%d hp:%d ����:%s\n", lv, hp, equip);
	fclose(fp);
}