#include<stdio.h>
main()
{
	int i1,i2,i3;
	char j;
	printf("���������:");
	scanf("%c", &j);
	printf("�O�̐��������");
	scanf("%d%d%d", &i1, &i2, &i3);
	
		switch (j) {
		case('d'):
			if (i1 > i2) {
				if (i1 > i3) {
					printf("�ő�l��%d\n", i1);
				}
				else {
					printf("�ő�l��%d\n", i3);
				}
			}
			else {
				if (i2 > i3) {
					printf("�ő�l��%d\n", i2);
				}
				else {
					printf("�ő�l��%d\n", i3);
				}
			}
			break;
		case('s'):
			if (i1 < i2) {
				if (i1 < i3) {
					printf("�ŏ��l��%d\n", i1);
				}
				else {
					printf("�ŏ��l��%d\n", i3);
				}
			}
			else {
				if (i2 < i3) {
					printf("�ŏ��l��%d\n", i2);
				}
				else {
					printf("�ŏ��l��%d\n", i3);
				}
			}
			break;
			
		case('g'):
			printf("���v��%d\n",i1+i2+i3);
			break;
		case('h'):
			printf("���ς�%d\n",(i1 + i2 + i3)/3);
			break;
		default:
			printf("�G���[");
		}

	
	
}
