#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char *p_data,  *p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data[]=%s\n", p_data);//%sの時はアドレスを指定する
	while (*p_data2++ = *p_data++);//文字列のコピー char*strcpy(*p_data2, *p_data)でもいける
	p_data2 = data2;
	printf("data2[]=%s\n", p_data2);
	while (*p_data2) {//\0も偽として扱う
		putchar(*p_data2++);
	}
	putchar('\n');
}