#include<stdio.h>
#define MapNum 3
#define W 10
#define H 5
typedef struct{
	int m_map[H][W];
}Map;
void SetMap(char* filename, Map* m);
void DrawMap(Map m);//第一引数は表示するマップの情報をもったMap構造体変数

main()
{
	Map MapData;
	char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("マップNoを入力(0,1,2)>");
	scanf("%d", &select);
	if (select >= 0 && select < MapNum) {
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
}
void SetMap(char* filename, Map* m) {
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				ch = fgetc(fp);//fgetcは\nも読み取ってしまう

				if (ch >= 48 && ch <= 123) {//48は文字コードで0。123は小文字のz
					m->m_map[i][j] = ch - '0';//数値に変換(アロー演算子で参照)
				}
				
			}
			fgetc(fp);//これで\nのみ読み捨て(読み取るだけ読みとる。値はつけないけど、次の数字に行く)
		}
	}
}

void DrawMap(Map m) {
	int i, j;
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			if (m.m_map[i][j] == 1) {
				printf("■");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
