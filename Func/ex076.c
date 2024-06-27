#include<stdio.h>
void enzan(int x, int y, int *goukei, float *heikin);
main()
{
	int a, b, c;
	float d;
	printf("二つの整数を入力>");
	scanf("%d%d", &a, &b);
	enzan(a, b, &c,&d);
	printf("合計=%d\t平均=%.2f", c, d);
}

void enzan(int x, int y, int* goukei, float* heikin)//goukei,heikinはc,dとアドレス渡しをしている
{
	*goukei = x + y;
	*heikin = *goukei / 2;
}