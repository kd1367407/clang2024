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
		printf("–¼‘O‚ð“ü—Í>");
		scanf("%s",p->name);
		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í>");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("ŒŒ‰tŒ^‚ð“ü—Í>");
		scanf("%s", p->blood);
	}
	p = &data[NIN];
	for (i = 0; i < NIN; i++, p++){
		if (strcmp(p->blood , "A")==0) {//strcmp‚Í“ñ‚Â‚Ì•¶Žš—ñ‚ð”ä‚×‚é
			printf("\n–¼‘O:%s\n", p->name);
			printf("%d”N%dŒŽ%d“ú¶‚Ü‚ê\n", p->birth[0], p->birth[1], p->birth[2]);
			printf("ŒŒ‰tŒ^:%s\n", p->blood);

		}
	}
}