#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice,d;
	srand(time(0));
	rand();
	dice = rand() %41+10;
	printf("サイコロは%dです\n", dice);
}