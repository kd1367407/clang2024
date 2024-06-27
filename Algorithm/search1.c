#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s, d[10] ;
	srand(time(0));
	for (i = 0; i < 10; i++) {
		d{ i } = rand() % 30 + 1;
	}
	printf("探索値sを入力>");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	printf("ループ終了\n");
	if (i == 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("探索値%dをd[%d]で発見",s,i);
	}
}