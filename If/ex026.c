#include <stdio.h>
main()
{
	int  m;
	printf("月を入力してください:");
	scanf("%d", &m);
	if (m == 2) {
		printf("最終日は２８日です\n");
	}
	else {
		if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) {
			printf("最終日は３０日です\n");
		}
		else {
			if (m == 5 || m == 7 || m == 8 || m == 10 || m == 12 || m == 1 || m == 3) {
				printf("最終日は３１日です\n");
			}
			else {
				printf("エラー");
			}
		}
	}
}