#include <stdio.h>
main()
{
	int e,no1,no2;
	printf("演算子を入力してください(1:+,2:-,3:*,4:/):");
	scanf("%d", &e);
	printf("二つの整数を入力してください:");
	scanf("%d %d", &no1, &no2);

	if (e == 1) {
		printf("結果は%dです\n",no1+no2);
	}

	else {
		if (e == 2) {
			printf("結果は%dです\n", no1 - no2);
		}
		else {
			if (e == 3) {
				printf("結果は%dです\n", no1 * no2);
			}
			else {
				if (e == 4) {
					printf("結果は%dです\n", no1 / no2);
				}
				else {
					printf("演算子を正しく入力してください");
				}
			}
		}
	}
	
}