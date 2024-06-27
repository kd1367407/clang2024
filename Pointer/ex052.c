#include<stdio.h>
main()
{
	int a = 100, b = 200, c;
	int* p_a, * p_b;
	printf("a=%d b=%d\n", a, b);
	p_a = &a;
	p_b = &b;
	c = *p_a;
	*p_a = *p_b;
	*p_b = c;
	printf("“ü‚ê‘Ö‚¦‚é‚Æa=%d b=%d", a, b);
}