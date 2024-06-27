#include<stdio.h>
main()
{
	int a = 5, b = 6, i=0;
	printf("a=%d\nb=%d\n", a, b);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	i = a;
	a = b;
	b = i;
	printf("a=%d\nb=%d\n", a, b);
}