#include<stdio.h>
struct syohin_data
{
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},{"消しゴム",50,2},{"筆箱",500,3} };
	struct syohin_data *p;
	p = &syohin[0];//p=&syohin[3]ではないのは先頭アドレスだけでいいから。p=syohinでもいい
	int i;
	for (i = 0; i < 3; i++,p++) {
		printf("商品名:%s\t", syohin[i].name);
		printf("単価:%3d\t", syohin[i].tanka);
		printf("個数:%3d\t", syohin[i].kosuu);
		printf("金額:%d円\n", p->tanka * p->kosuu);
	}
}