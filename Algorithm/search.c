#include<stdio.h>
main()
{
	int i, s, d[10] = {10,5,30,77,16,3,47,29,37,33};
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