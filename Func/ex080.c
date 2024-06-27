#include<stdio.h>
#define TBL_end 5
int tbl_gokei4(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);//ŠÖ”tbl_gokei4‚ÌŒÄ‚Ño‚µ
	printf("gokei=%d\n", gokei);
}

int tbl_gokei4(int* p)
{
	int gokei = 0, i = 0;
	while (i < TBL_end) {
		gokei += *p;
		i++;
		p++;
	}
	return(gokei);
}