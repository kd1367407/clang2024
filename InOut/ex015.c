#include <stdio.h>
main()
{
	int no,mo;
	printf("整数を入れて:");
	scanf("%d", &no);
	printf("入力値は%dです\n", no);
	printf("二つ目の整数を入れて:");
	scanf("%d", &mo);
	printf("入力値は%dです\n", mo);
	printf("合計は%dです\n", no + mo);
}