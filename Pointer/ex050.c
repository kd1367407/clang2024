#include<stdio.h>
main()
{
	int a = 100;
	int* p_a;//aĘ¢¤ØĢĒl(p_a)šŻč
	p_a = &a;//aĢZšp_aÉi[
	printf("a=%d &a=%d\n", a, &a);
	printf("*p_a=%d p_a=%d &p_a=%d\n", *p_a, p_a, &p_a);
}