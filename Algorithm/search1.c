#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s, d[10] ;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		d{ i } = rand() % 30 + 1;
	}
	printf("�T���ls�����>");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	printf("���[�v�I��\n");
	if (i == 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�T���l%d��d[%d]�Ŕ���",s,i);
	}
}