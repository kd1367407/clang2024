#include<stdio.h>
main()
{
	int i1,i2,i3;
	char j;
	printf("処理を入力:");
	scanf("%c", &j);
	printf("三つの整数を入力");
	scanf("%d%d%d", &i1, &i2, &i3);
	
		switch (j) {
		case('d'):
			if (i1 > i2) {
				if (i1 > i3) {
					printf("最大値は%d\n", i1);
				}
				else {
					printf("最大値は%d\n", i3);
				}
			}
			else {
				if (i2 > i3) {
					printf("最大値は%d\n", i2);
				}
				else {
					printf("最大値は%d\n", i3);
				}
			}
			break;
		case('s'):
			if (i1 < i2) {
				if (i1 < i3) {
					printf("最小値は%d\n", i1);
				}
				else {
					printf("最小値は%d\n", i3);
				}
			}
			else {
				if (i2 < i3) {
					printf("最小値は%d\n", i2);
				}
				else {
					printf("最小値は%d\n", i3);
				}
			}
			break;
			
		case('g'):
			printf("合計は%d\n",i1+i2+i3);
			break;
		case('h'):
			printf("平均は%d\n",(i1 + i2 + i3)/3);
			break;
		default:
			printf("エラー");
		}

	
	
}
