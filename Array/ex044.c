#include<stdio.h>
main()
{
	char moji1[80], moji2[80], moji3[80];
	int i;
	printf("������1�����:");
	scanf("%s", &moji1[0]);
	printf("������2�����:");
	scanf("%s", &moji2[0]);

	printf("moji1=%s\tmoji2=%s", &moji1[0], &moji2[0]);
	//moji1�̓��e��moji3�ɃR�s�[���Ă���
	for (i = 0; moji3[i] = moji1[i]; i++);
	
	for (i = 0; moji1[i] = moji2[i]; i++);
	
	for (i = 0; moji2[i] = moji3[i]; i++);
	
	printf("\n����ւ����\n");
	printf("moji1=%s\tmoji2=%s", &moji1[0], &moji2[0]);
}