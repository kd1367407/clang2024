#include<stdio.h>
void cat(char* a, char* b);
main() {
	char num1[] = { 3,5,7,9,11,13,15,17,19,21 };
	char num2[] = { 4,8,12,16,20,24,28,32,38,42 };
	printf("Às‘O\n");
	for (int i = 0; i < 10; i++) {
		printf("%d,", num1[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d,", num2[i]);
	}
	printf("\nÀsŒã\n");
	cat(num1, num2);
	printf("%s", num1);
}

void cat(char* a, char* b)
{
	int i, j;
	for (i = 0; *(a + i) != '\0'; i++);
	for (j = 0; *(a + i) = *(b + j); i++, j++);
}