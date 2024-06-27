#include <stdio.h>
main()
{
	float no,mo,ao,all;
	printf("実数を入れて:");
	scanf("%f", &no);
	printf("入力値は%.2fです\n", no);
	printf("二つ目の実数を入れて:");
	scanf("%f", &mo);
	printf("入力値は%.2fです\n", mo);
	printf("三つ目の実数を入れて:");
	scanf("%f", &ao);
	printf("入力値は%.2fです\n", ao);
	printf("合計は%.2fです\n", no + mo+ao);
	all = no + mo + ao;
	printf("平均値は%.2fです\n", all / 3);
}