#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;//a‚Æ‚¢‚¤•¨Œ‚ÌŠÇ—l(p_a)‚ğİ’è
	p_a = &a;//a‚ÌZŠ‚ğp_a‚ÉŠi”[
	b = *p_a;//p_a‚ªŠÇ—‚·‚éƒAƒhƒŒƒX(ZŠ)‚Ì’†g(a‚Ì’†g)‚ğ‚‚‚ÉŠi”[
	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}