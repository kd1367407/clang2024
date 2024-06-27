#include<stdio.h>

typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct {
	char name[20];
	int hp;
	Weapon wpn;//wpn�̒���Wname,bullet,atk�������Ă�
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(s);

main()
{
	Soldier sol;
	SetInfo(&sol, "file03.txt");
	Display(sol);
}

void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	if (fp = fopen(filename, "r")) {//������fimename�ɂȂ�Ə�肭�J���Ă��Ȃ�
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);//������͂��Ƃ��ƃA�h���X��������?&������Ȃ�
		fclose(fp);
	}
	else {
		printf("�t�@�C�����ǂݍ��߂܂���\n");
	}
}

void Display(Soldier s) {
	printf("���O:%s �̗�:%d\n", s.name, s.hp);
	printf("����:%s �c�i��:%d �U����:%.2f\n", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}