#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;//a�Ƃ��������̊Ǘ��l(p_a)��ݒ�
	p_a = &a;//a�̏Z����p_a�Ɋi�[
	b = *p_a;//p_a���Ǘ�����A�h���X(�Z��)�̒��g(a�̒��g)�����Ɋi�[
	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}