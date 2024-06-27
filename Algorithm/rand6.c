#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p,c;
	srand(time(0));
	rand();
	c = rand() % 3;
	printf("何を出しますか？1:グー2:チョキ3:パー>");
	scanf("%d", &p);
	switch (p) {
	case 1:
		printf("\nプレイヤーはグーです。\n");
		break;
	case 2:
		printf("\nプレイヤーはチョキです。\n");
		break;
	case 3:
		printf("\nプレイヤーはパーです。\n");
	}
	switch (c) {
	case 0:
		printf("コンピュータはグーです。\n");
		break;
	case 1:
		printf("コンピュータはチョキです。\n");
		break;
	case 2:
		printf("コンピュータはパーです。\n");
	}
	
	if (p==1 && c==1) {
		printf("\nプレイヤーの勝ちです");
	}
	else {
		if (p == 1 && c == 2) {
			printf("\nコンピュータの勝ちです");
		}
		else {
			if (p == 2 && c == 0) {
				printf("\nコンピュータの勝ちです");
			}
			else {
				if (p == 2 && c == 2) {
					printf("\nプレイヤーの勝ちです");
				}
				else {
					if (p == 3 && c == 0) {
						printf("\nプレイヤーの勝ちです");
					}
					else {
						if (p == 3 && c == 1) {
							printf("\nコンピュータの勝ちです");
						}
						else {
							printf("\nあいこです");
						}
					}
				}
			}
		}
	}
}