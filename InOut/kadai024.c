#include<stdio.h>
main()
{
	int a,b;
	
	printf("二つの整数を入力:");
	scanf("%d %d", &a, &b);
	
	printf("!!!%dと%dの四則演算!!!\n",a,b);
	
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%dあまり%d\n",a,b,a/b, a % b);
}