#include<stdio.h>
void irekae(int *x, int *y);
main()
{
	int a=10, b=20;
	printf("�֐����s�O�̐��l\na=%d\tb=%d\n",a,b);
	irekae(&a,&b);
	printf("�֐����s��̐��l\na=%d\tb=%d",a,b);
}

void irekae(int *x, int *y)
{
	int w;
	w = *x;
	*x = *y;
	*y = w;
	return;
}