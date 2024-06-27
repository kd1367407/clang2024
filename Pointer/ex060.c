#include<stdio.h>
main()
{
	char data[15] = "Language";
	int i;
	char *p_data,a;
	p_data = data;
	printf("data[]=%s\n", p_data);
	printf("ŒŸõ•¶š‚Í?>");
	scanf("%c", &a);
	printf("ŒŸõŒ‹‰Ê‚Í");
	for (i = 1; *(p_data+i) != '\0';i++) {
		if (a == *(p_data+i)) {
			printf("%d,", i+1);
		}
	}
	printf("•¶š–Ú‚Å‚·\n");
}