#include<stdio.h>
main()
{
	char data[15] = "Language";
	int i;
	char *p_data,a;
	p_data = data;
	printf("data[]=%s\n", p_data);
	printf("検索文字は?>");
	scanf("%c", &a);
	printf("検索結果は");
	for (i = 1; *(p_data+i) != '\0';i++) {
		if (a == *(p_data+i)) {
			printf("%d,", i+1);
		}
	}
	printf("文字目です\n");
}