#include<stdio.h>
void enzan(int x, int y, int *goukei, float *heikin);
main()
{
	int a, b, c;
	float d;
	printf("��̐��������>");
	scanf("%d%d", &a, &b);
	enzan(a, b, &c,&d);
	printf("���v=%d\t����=%.2f", c, d);
}

void enzan(int x, int y, int* goukei, float* heikin)//goukei,heikin��c,d�ƃA�h���X�n�������Ă���
{
	*goukei = x + y;
	*heikin = *goukei / 2;
}