#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,i;
	srand(time(0));
	rand();
	a = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^����");
	for (i=0; i < a; i++ ) {
		printf("��");
	}
	printf("\t�ł�");
}