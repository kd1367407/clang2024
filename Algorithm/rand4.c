#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,i;
	srand(time(0));
	rand();
	a = rand() % 5 + 1;
	printf("今日のあなたの運勢は");
	for (i=0; i < a; i++ ) {
		printf("☆");
	}
	printf("\tです");
}