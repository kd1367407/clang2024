#include<stdio.h>
void irekae(int x, int y, int z, int *v,int *n);
main()
{
	int a, b, c, d,e;
	printf("3�̐��������>");
	scanf("%d%d%d", &a, &b, &c);
	irekae(a, b, c, &d,&e);
	printf("�ő�l=%d\t�ŏ��l=%d\n", d, e);
}

void irekae(int x, int y, int z, int* v, int* n)
{
	if (x > y) {
		if (x > z) {
			*v = x;
		}
		else {
			*v = z;
		}
	}
	else {
		if (y > z) {
			*v = y;
		}
		else {
			*v = z;
		}
	}
	if (x < y) {
		if (x < z) {
			*n = x;
		}
		else {
			*n = z;
		}
	}
	else {
		if (y < z) {
			*n = y;
		}
		else {
			*n = z;
		}
	}
}