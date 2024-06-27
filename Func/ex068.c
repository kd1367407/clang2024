#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	c = getchar();//1文字入力してcに文字の文字コードを代入される
	while (c != EOF) {//cがEOFでない間繰り返す。要するにctrl Zが入力されるまで繰り返す
		putchar(c);//cの出力
		putchar('\n');
		gets(dumy);//ABCと入力した場合、出力されるのはAのみ。それは一文字を扱うputcharだから。gets(dum)は残りのBCを入力バッファから消す
		c = getchar();
	}
}