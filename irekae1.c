#include<stdio.h>
main()
{
	int a = 5, b = 6;
	printf("a=%d\nb=%d\n", a, b);
	printf("入れ替えると\n");
	
	printf("a=%d\nb=%d\n", (a+b)-a, (a + b) - b);
}