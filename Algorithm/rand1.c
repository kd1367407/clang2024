#include<stdio.h>
#include<stdlib.h>//乱数を使うときに必要
#include<time.h>//乱数を使うときに必要
main()
{
	int kazu;
	srand(time(0));//乱数を初期化（シャッフル）
	rand();//randの空読みというテクニック。最初の一回は数値が偏るから
	kazu = rand();//0から32767の範囲で乱数を求める
	printf("発生した乱数は%dです\n", kazu);
}