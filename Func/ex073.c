#include<stdio.h>
void error_msg(void);//�v���g�^�C�v�錾
main()
{
	int a, b;
	printf("data1 data2?:");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error_msg();//�֐�error_msg�̌Ăяo��
	}
	else {
		printf("%d/%d=%d�D�D�D%d\n", a, b, a / b, a % b);
	}
}

void error_msg(void)
{
	printf("0�Ŋ���Z�͂ł��܂���\n");
	return;
}