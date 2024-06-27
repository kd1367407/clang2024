#include<stdio.h>
main() {
	int num1[] = { 3,5,7,9,11,13,15,17,19,21 };
	int* a = num1;
	int num2[] = { 4,8,12,16,20,24,28,32,38,42 };
	int* b = num2;
	int w;
	printf("Às‘O\n");
	for (int i = 0; i < 10; i++) {
		printf("%d,", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d,", b[i]);
	}
	printf("\nÀsŒã\n");
	w = 0;
	for (int i = 0; i < 10; i++) {
		w = a[i];
		a[i] = b[i];
		b[i] = w;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d,", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d,", b[i]);
	}
}