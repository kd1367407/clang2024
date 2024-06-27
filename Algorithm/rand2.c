#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;
	srand(time(0));
	dice = rand() % 6 + 1;//余りを使うことでランダムな数値をある程度搾れる
	printf("サイコロは%dです\n", dice);
}