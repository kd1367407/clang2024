#include <stdio.h>
main()
{
	int no1 = 0, no2 = 0, no3;
	printf("秒数を入力:");
	scanf("%d", &no3);
	
	if (no3 <= 5000,no3>0) {
		no1 = no3 / 3600;
		no3 = no3 % 3600;
		no2 = no3 / 60;
		no3 = no3 % 60;
		printf("%d時間%d分%d秒です\n", no1, no2, no3);
	}
	else (no3 > 5000,no3>0); {
		printf("エラー:5000を超えています\n");
			
	}
	if (no3 < 0) {
		printf("エラー:マイナスの値です\n");
	}
}