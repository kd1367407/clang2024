#include <stdio.h>
main()
{
	int no,mo,ao;
	float avr;

	printf("三つ整数を入れて:");
	scanf("%d %d %d", &no, &mo, &ao);

	printf("合計は%dです\n", no+mo+ao);
	avr = (no + mo + ao) / 3.0;
	printf("平均は%.2fです\n", avr);
}