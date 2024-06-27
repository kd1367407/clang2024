#include<stdio.h>
main()
{
	int a = 100;
	int* p_a;//a‚Æ‚¢‚¤•¨Œ‚ÌŠÇ—l(p_a)‚ğİ’è
	p_a = &a;//a‚ÌZŠ‚ğp_a‚ÉŠi”[
	printf("a=%d &a=%d\n", a, &a);
	printf("*p_a=%d p_a=%d &p_a=%d\n", *p_a, p_a, &p_a);
}