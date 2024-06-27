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
	printf("–¼‘O‚ð“ü—Í>");
	gets( p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í>");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í>");
	scanf("%s",p->blood);
	
	printf("–¼‘O:%s\n", p->name);
	printf("%d”N%dŒŽ%d“ú¶‚Ü‚ê\n", p->birth[0], p->birth[1], p->birth[2]);
	printf("ŒŒ‰tŒ^:%s\n", p->blood);
}