#include<stdio.h>
main()
{
	int high, low, s, mid;
	int d[11] = {10,5,30,77,16,3,47,29,37,33,22};
	printf("’Tõ’ls‚ğ“ü—Í>");
	scanf("%d", &s);
	high = 10;
	low = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("’Tõ’l%d‚ğd[%d]‚Å”­Œ©", s, mid);
	}
}