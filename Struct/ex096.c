#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
};
void display3(struct syohin_data *syohin);
main()
{
	struct syohin_data syohin = { "Á‚µƒSƒ€",50};
	display3(&syohin);//&–Y‚ê‚È‚¢‚±‚Æ
}


void display3(struct syohin_data *syohin) {
	printf("syohin.name=%s\tsyohin.tanka=%d\n", syohin->name, syohin->tanka);
}