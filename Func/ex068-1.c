#include<stdio.h>
main() {
	int a, b, c, d;
	printf("3�̐������󔒂ŋ�؂��ē���>");
	d=scanf("%d%d%d", &a, & b, &c);//d�ɂ͂R������B���͂������3������
	printf("d=%d a=%d b=%d c=%d\n", d, a, b, c);

	printf("���������(ctrl Z�ŏI��)a>");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		printf("���������(ctrl Z�ŏI��)a>");
	}
}