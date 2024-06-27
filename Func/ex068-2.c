#include<stdio.h>
main() {
	char str[256];
	// 連続1行入力の定石パターン
	while (gets(str) != NULL) {
		puts(str);//()内の文字列をそのまま出力して改行文字\nを末尾に追加する
	}
}