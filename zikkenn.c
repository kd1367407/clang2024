#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char name1[80];
	char *player1;
	printf("\n名前を入力してください>");
	scanf("%s", &name1);
	player1 = name1;
	printf("%s", player1);
}