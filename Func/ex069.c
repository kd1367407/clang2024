#include<stdio.h>
main()
{
	int a, max,i;
	float avr;
	max = 0;
	avr = 0;
	i = 0;
	printf("���������(ctrl Z�ŏI��)a>");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		max += a;
		i++;
		printf("���������(ctrl Z�ŏI��)a>");
	}
	printf("���v=%d\t����=%.2f", max, (float)max / i);
}