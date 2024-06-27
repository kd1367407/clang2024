#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a;
	srand(time(0));
	a = rand() % 100 + 1;
	if (a <= 30) {
		print("•‘MII");
	}
	else {
		printf("’ÊíUŒ‚");
	}
}