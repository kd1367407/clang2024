#include<stdio.h>
#define B_SIZE 4//�����錾���邱�ƂŃv���O������B_SIZE�����ꂽ��S�Ƃ��Ĉ���
main()
{
	int a[6] = { 11,22,33,44,55,66 };
	int *p_a,a_sum,i;
	float b[4] = { 11.1,22.2,33.3,44.4 };
	float *p_b,b_sum;
							//int��4�o�C�g�Ȃ̂�sizeof�̕����́i�S���U�j/4�ɂȂ�	
	for (i = 0,p_a=a,a_sum=0; i < sizeof a/sizeof(int); i++,p_a++) {
		a_sum += *p_a;
	}
	printf("�z��a�̍��v��%7d\t���ς�%6.3f\n", a_sum, (float)a_sum / (sizeof a/sizeof(int)));

	for (i = 0, p_b = b, b_sum = 0; i < B_SIZE ; i++, p_b++) {
		b_sum += *p_b;
	}
	printf("�z��b�̍��v��%7.3f\t���ς�%6.3f", b_sum, b_sum /B_SIZE);
}