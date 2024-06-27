#include<stdio.h>
main()
{
	char *p_game[3] = { "wii","ds","playstation4" };
	int i;
	char **p;
	p = p_game;//p_gameのアドレスをpに入れる
	for (i = 0; i < 3, i++) {
		printf("%s\n", *p++);//pの内容(p_gameの内容＝wiiなどのアドレス)の内容を取り出す
	}
}