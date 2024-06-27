#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a = &a, * p_b = &b, *c;
	printf("*p_a=%d *p_b=%d\n", *p_a,*p_b);
	p_a = &a;
	p_b = &b;
	c = p_a;
	p_a = p_b;
	p_b = c;
	printf("“ü‚ê‘Ö‚¦‚é‚Æ*p_a=%d *p_b=%d", *p_a, *p_b);
}