#include<stdio.h>
#define SIZE 5
main()
{
	int d[SIZE]={ 30, 7, 25, 16, 10 }, i, j,w;
	printf("ソート前\n");
	for (i = 0; i < SIZE; i++) {
		printf("d[%d]=%d\n", i, d[i]);
	}
	printf("ソート後\n");
	for(i=1;i<SIZE;i++){
		for (j = i-1; j >= 0; j--) {
			if (d[j + 1] <= d[j]) {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	
	printf("ソート後\n");
	for (i = 0; i < SIZE; i++) {
		printf("d[%d]=%d\n", i, d[i]);
	}
}