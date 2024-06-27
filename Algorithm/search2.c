#include<stdio.h>
main()
{
	int i, s, d[11] = {10,5,30,77,16,3,47,29,37,33};
	printf("探索値sを入力>");
	scanf("%d", &s);
	for (i = 0, d[10] = s; s != d[i]; i++);
	printf("ループ終了\n");
	if (i == 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("探索値%dをd[%d]で発見",s,i);
	}
}