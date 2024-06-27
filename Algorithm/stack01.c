#include<stdio.h>
#define STACKSIZE 8//スタックサイズ
int stack[STACKSIZE];//スタック領域用配列。大きさは８
int sp = 0;//スタックポインタ(配列の添え字用)ナビゲータみたいな役割
//関数プロトタイプ宣言
void display(void);
int push(int d);
int pop(int* pb);
main()
{
	int key, data, result;
	do {
		printf("\n\nプッシュはi、ポップはoを入力>");
		key = getche();
		printf("\n");

		//プッシュ処理
		if(key=='i'){
			printf("データ入力>");
			scanf("%d", & data);
			result = push(data);
			if (result == -1) {
				printf("\nスタックがいっぱいです\n");
			}
			else {
				display();
			}
		}
		
		//ポップ処理
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\nスタックが空です\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//スタック表示関数
void display(void)
{
	int i;
	printf("\n現在のスタックの内容\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("←spが示している所(現在spは%d)", sp);//確認用
		}
		printf("\n");
	}
	return;
}

//スタックにデータを積む(プッシュする)関数
int push(int d)//dは入力した値が入る
{
	if ( sp== STACKSIZE) { return -1; }//スタックがいっぱいの時
	stack[sp] = d;
	sp++;
	return 0;
}

//スタックからデータを取り出す(ポップする)関数
int pop(int* pb)
{
	if (sp <= 0) { return -1; }//スタックが空の時
	sp--;
	stack[sp] = *pb;
	stack[sp] = 0;//確認しやすくするため
	return 0;
}