#include<stdio.h>
main()
{
	int a = 100;
	int* p_a;//a�Ƃ��������̊Ǘ��l(p_a)��ݒ�
	p_a = &a;//a�̏Z����p_a�Ɋi�[
	printf("a=%d &a=%d\n", a, &a);
	printf("*p_a=%d p_a=%d &p_a=%d\n", *p_a, p_a, &p_a);
}