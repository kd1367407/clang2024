#include<stdio.h>
void display(int a);//プロトタイプ宣言
main()
{
	int a;
	printf("data?:");
	scanf("%d", &a);
	display(a);
}

void display(int a)
{
	printf("入力データ=%d\n", a);
	return;
}