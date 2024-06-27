#include<stdio.h>

typedef struct {
	char Wname[20];
	int bullet;
	float atk;
}Weapon;
typedef struct {
	char name[20];
	int hp;
	Weapon wpn;//wpnの中にWname,bullet,atkが入ってる
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
	if (fp = fopen(filename, "r")) {//ここでfimenameになると上手く開けていない
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);//文字列はもともとアドレスを持つから?&がいらない
		fclose(fp);
	}
	else {
		printf("ファイルが読み込めません\n");
	}
}

void Display(Soldier s) {
	printf("名前:%s 体力:%d\n", s.name, s.hp);
	printf("武器:%s 残段数:%d 攻撃力:%.2f\n", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}