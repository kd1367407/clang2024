#include<stdio.h>
main()
{
	int num, an;
	an = 0;
	printf("”‚ğ“ü—Í");
	scanf("%d", &num);
	while (1) {
		an += num;
		if (num == -999)break;//{}‚ª‚È‚¢ê‡Aˆê•¶‚¾‚¯ˆ—‚³‚ê‚éB‚±‚ê‚Ìê‡‚Íif`break;‚Ü‚Å
		printf("”‚ğ“ü—Í");
		scanf("%d", &num);
	}
	printf("‡Œv‚Í%d", an);
}