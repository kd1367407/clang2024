#include <stdio.h>
main()
{
	float no;
	printf("整数を入れて:");
	scanf("%f", &no);
	printf("2倍の数は%.1fです\n", no*2);
	printf("3倍の数は%.1fです\n", no * 3);
}