#include<stdio.h>
#define B_SIZE 4//これを宣言することでプログラムでB_SIZEが現れたら４として扱う
main()
{
	int a[6] = { 11,22,33,44,55,66 };
	int *p_a,a_sum,i;
	float b[4] = { 11.1,22.2,33.3,44.4 };
	float *p_b,b_sum;
							//intは4バイトなのでsizeofの部分は（４＊６）/4になる	
	for (i = 0,p_a=a,a_sum=0; i < sizeof a/sizeof(int); i++,p_a++) {
		a_sum += *p_a;
	}
	printf("配列aの合計は%7d\t平均は%6.3f\n", a_sum, (float)a_sum / (sizeof a/sizeof(int)));

	for (i = 0, p_b = b, b_sum = 0; i < B_SIZE ; i++, p_b++) {
		b_sum += *p_b;
	}
	printf("配列bの合計は%7.3f\t平均は%6.3f", b_sum, b_sum /B_SIZE);
}