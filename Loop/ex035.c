#include<stdio.h>
main()
{
	int num, an;
	an = 0;
	printf("数を入力");
	scanf("%d", &num);
	while (1) {
		an += num;
		if (num == -999)break;//{}がない場合、一文だけ処理される。これの場合はif〜break;まで
		printf("数を入力");
		scanf("%d", &num);
	}
	printf("合計は%d", an);
}