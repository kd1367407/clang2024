#include<stdio.h>
main()
{
	int a, max,i;
	float avr;
	max = 0;
	avr = 0;
	i = 0;
	printf("整数を入力(ctrl Zで終了)a>");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		max += a;
		i++;
		printf("整数を入力(ctrl Zで終了)a>");
	}
	printf("合計=%d\t平均=%.2f", max, (float)max / i);
}