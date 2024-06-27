#include<stdio.h>
main()
{
	int a,b,c;
	printf("生年月日の年を入力してください\n");
	scanf("%d", &a);
	printf("生年月日の月を入力してください\n");
	scanf("%d", &b);
	printf("生年月日の日を入力してください\n");
	scanf("%d", &c);
	printf("生年月日は%d年%d月%d日です", a, b,c);
}