#include<stdio.h>
int strcnt(char *p);
main()
{
	char buf[256];
	int mojisuu;
	printf("文字列を入力>");
	gets(buf);
	mojisuu = strcnt(buf);
	printf("入力された文字列の文字数は%d文字です\n", mojisuu);
}

int strcnt(char *p)
{
	int cut;
	for (cut = 0; *p != '\0'; cut++, p++);
	return cut;
}