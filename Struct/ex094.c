#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
#define NIN 5
main()
{
	struct profile data[NIN];
	struct profile* p;
	p = &data[NIN];
	int i;
	for (i = 0; i < NIN; i++,p++) {
		printf("名前を入力>");
		scanf("%s",p->name);
		printf("生年月日を空白で区切って入力>");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型を入力>");
		scanf("%s", p->blood);
	}
	p = &data[NIN];
	for (i = 0; i < NIN; i++, p++){
		if (strcmp(p->blood , "A")==0) {//strcmpは二つの文字列を比べる
			printf("\n名前:%s\n", p->name);
			printf("%d年%d月%d日生まれ\n", p->birth[0], p->birth[1], p->birth[2]);
			printf("血液型:%s\n", p->blood);

		}
	}
}