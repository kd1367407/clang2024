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
		printf("���O�����>");
		scanf("%s",p->name);
		printf("���N�������󔒂ŋ�؂��ē���>");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^�����>");
		scanf("%s", p->blood);
	}
	p = &data[NIN];
	for (i = 0; i < NIN; i++, p++){
		if (strcmp(p->blood , "A")==0) {//strcmp�͓�̕�������ׂ�
			printf("\n���O:%s\n", p->name);
			printf("%d�N%d��%d�����܂�\n", p->birth[0], p->birth[1], p->birth[2]);
			printf("���t�^:%s\n", p->blood);

		}
	}
}