#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,-999 },i;
	int *p_a;
		printf("�|�C���^��ω������ĕ\��\na[]");
	for (p_a=a; *p_a!=-999; p_a++) {
		printf("%d,", *p_a);
	}
	p_a = a;
	printf("\n�|�C���^���Œ肳���ĕ\��\na[]");
	for (i=0; *(p_a+i) != -999; i++) {
		printf("%d,", *(p_a+i));
	}
}