#include<stdio.h>
main()
{

	int tbl[][3] = { {10,20,30}, {40,50,60},{70,80,90} };
	int *p_tbl, i;
	p_tbl = &tbl[0][1];//&がなければ先頭を参照する。この場合&がなければ１０
	printf("2次元配列tbの内容。1列目のみ\n");
	for (i = 0; i < 3; i++) {
		printf("%d,", *p_tbl);
		p_tbl += 3;
	}
}