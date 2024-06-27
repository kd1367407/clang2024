#include<stdio.h>
int tbl_max(int *array, int size);
int tbl_min(int *array, int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d", tbl_max(data, 8));
	printf("Å¬’l%d",tbl_min(data,8));
}

int tbl_max(int *array, int size)
{
	int max;
	max = *array;
	int i = 1;
	while (i < size) {
		if (*(array+i) > max) {
			max = *(array+i);
		}
		i++;
	}
	return max;
}

int tbl_min(int* array, int size)
{
	int min;
	min = *array;
		int i = 1;
	while (i < size){
		if (*(array + i) < min) {
			min = *(array + i);
		}
		i++;
	}
	return min;
}