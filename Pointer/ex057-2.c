#include<stdio.h>
main()
{

	int tbl[][3] = { {10,20,30}, {40,50,60},{70,80,90} };
	int *p_tbl, i;
	p_tbl = &tbl[0][1];//&���Ȃ���ΐ擪���Q�Ƃ���B���̏ꍇ&���Ȃ���΂P�O
	printf("2�����z��tb�̓��e�B1��ڂ̂�\n");
	for (i = 0; i < 3; i++) {
		printf("%d,", *p_tbl);
		p_tbl += 3;
	}
}