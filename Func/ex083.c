#include<stdio.h>
int strcnt(char *p);
main()
{
	char buf[256];
	int mojisuu;
	printf("����������>");
	gets(buf);
	mojisuu = strcnt(buf);
	printf("���͂��ꂽ������̕�������%d�����ł�\n", mojisuu);
}

int strcnt(char *p)
{
	int cut;
	for (cut = 0; *p != '\0'; cut++, p++);
	return cut;
}