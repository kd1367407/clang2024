#include <stdio.h>
main()
{
	char  moji;
	printf("文字を入力してください:");
	scanf("%c", &moji);
	if (0x41 <= moji <= 0x5a) {
		printf("大文字です\n");
	}
	else {
		printf("その他の文字です\n");
	}

}