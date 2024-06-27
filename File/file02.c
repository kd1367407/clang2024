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
	fscanf(fp, "%d,%d,%s", &lv, &hp, equip);//ã‚Åstr‚ð“ñ‚ÂŽg‚Á‚½‚Ì‚ÅŽŸ‚Ì“Ç‚ÝŽæ‚è‚ÍŽOs–Ú‚©‚ç
	printf("lv:%d hp:%d ‘•”õ:%s\n", lv, hp, equip);
	fclose(fp);
}