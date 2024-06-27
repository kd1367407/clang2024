#include<stdio.h>
int add(int , int ,int );
float heikin(int , int , int );
main()
{
	int a, b,c, kotae;
	printf("®”‚ğ3‚Â“ü—Í>");
	scanf("%d%d%d", &a, &b,&c);
	kotae = add(a, b,c);
	printf("‡Œv‚Í%d‚Å‚·\n", kotae);
	
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", heikin(a, b, c));
}

int add(int a, int b,int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}

float heikin(int a, int b, int c)
{
	float ans;
	ans = (float)add(a,b,c) / 3;
	return(ans);
}