#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data;
	struct profile *p;
	p = &data;
	printf("名前を入力>");
	gets( p->name);
	printf("生年月日を空白で区切って入力>");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("血液型を入力>");
	scanf("%s",p->blood);
	
	printf("名前:%s\n", p->name);
	printf("%d年%d月%d日生まれ\n", p->birth[0], p->birth[1], p->birth[2]);
	printf("血液型:%s\n", p->blood);
}