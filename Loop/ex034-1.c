#include<stdio.h>
main()
{
	int i;
	printf("数を入力");
	scanf("%d", &i);
	do {
		printf("*****\n");
		i--;//デクリメント　数値から１減らす操作
	} while (i != 0);
}