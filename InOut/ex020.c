#include <stdio.h>
main()
{
	char moji;
	printf("小文字入力:");
	scanf("%c", &moji);
	printf("大文字変換=%c\n", moji-0x20);
}