#include<stdio.h>
main() {
	int a, b, c, d;
	printf("3つの整数を空白で区切って入力>");
	d=scanf("%d%d%d", &a, & b, &c);//dには３が入る。入力する個数が3つだから
	printf("d=%d a=%d b=%d c=%d\n", d, a, b, c);

	printf("整数を入力(ctrl Zで終了)a>");
	while (scanf("%d", &a) != EOF) {
		printf("a=%d\n", a);
		printf("整数を入力(ctrl Zで終了)a>");
	}
}