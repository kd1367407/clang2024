#include<stdio.h>
main()
{
	char moji1[80], moji2[80], moji3[80];
	int i;
	printf("文字列1を入力:");
	scanf("%s", &moji1[0]);
	printf("文字列2を入力:");
	scanf("%s", &moji2[0]);

	printf("moji1=%s\tmoji2=%s", &moji1[0], &moji2[0]);
	//moji1の内容をmoji3にコピーしている
	for (i = 0; moji3[i] = moji1[i]; i++);
	
	for (i = 0; moji1[i] = moji2[i]; i++);
	
	for (i = 0; moji2[i] = moji3[i]; i++);
	
	printf("\n入れ替えると\n");
	printf("moji1=%s\tmoji2=%s", &moji1[0], &moji2[0]);
}