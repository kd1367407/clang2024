#include<stdio.h>
#define queuesize 8//キューサイズ
int queue[queuesize];//キュー領域用配列
int head = 0;//キュー先頭データのポインタ(配列の添え字用)
int tail = 0;//キュー終端データのポインタ(配列の添え字用)

//関数プロトタイプ宣言
void display(void);
int enqueue(int d);
int dequeue(int *pd);
main()
{
	int key, data, result;
	do {
		printf("\nエンキューはi、デキューはoを入力して\n>");
		key = getche();
		printf("\n");

		//エンキュー処理
		if (key == 'i') {
			printf("データ入力>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("キューがいっぱいです");
			}
			else {
				display();
			}
		}

		//デキュー処理
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("キューが空です\n");
			}
			else {
				printf("キューからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

//キュー表示関数
void display(void)
{
	int i;
	printf("\n現在のキューの内容\n");
	for (i = 0; i < queuesize; i++) {
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head) {
			printf("←headが示している所(現在headは%d)", head);//確認用
		}
		if (i == tail) {
			printf("←tailが島している所(現在tailは%d)", tail);
		}
		printf("\n");
	}
	return;
}

//キューにデータを入れる(エンキューする)
int enqueue(int d)
{
	if (head == (tail+1) % queuesize) { return -1; }//キューがいっぱいの時
	queue[tail] = d;
	tail++;
	tail = tail % queuesize;
	return 0;
}

//キューからデータを取り出す(デキューする)
int dequeue(int* pd)
{
	if (head == tail) { return -1; }//キューが空の時
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % queuesize;
	return 0;
}
