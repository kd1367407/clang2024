#include <stdio.h>
main()
{
	int year ;
	printf("西暦を入力してください:");
	scanf("%d", &year);

	if (year % 400 == 0) {
		printf("うるう年です");
	}

	else {
		if (year % 4 == 0) {
			if (year % 100 != 0) {
				printf("うるう年です");
			}
			else {
				printf("うるう年ではありません");
			}
		}
		else {
			printf("うるう年ではありません");
		}
		
	}
	
}