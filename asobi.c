#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
main()
{
	int p1 = 10000, p2 = 10000, d1, d2, d3, g1, g2, max1, max2, b1, b2,a;
	char name1[80];
	char *player1;
	char name2[80];
	char *player2;
	srand(time(0));
	rand();
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	d3 = rand() % 6 + 1;
	printf("このゲームはブラックジャック擬きです。\nサイコロの出目の大きい方が勝ちです。\n所持金を無くすと終了になります。");
	printf("\n名前を入力してください>");
	scanf("%s", &name1);
	player1 = name1;
	printf("\n名前を入力してください>");
	scanf("%s", &name2);
	player2 = name2;
	while (1) {
		g1 = 0;
		g2 = 0;
		max1 = 0;
		max2 = 0;
		b1 = 0;
		b2 = 0;
		if (p1 == 0) {
			printf("%sの所持金が底をつきました。\n銀行へ行ってお金を下ろしてきてください。", player1);
			break;
		}
		if (p2 == 0) {
			printf("%sの所持金が底をつきました。\n銀行へ行ってお金を下ろしてきてください。",player2);
			break;
		}
		printf("\n%sの現在の所持金は%dです\n",player1, p1);
		printf("%sの現在の所持金は%dです\n",player2, p2);
		printf("\n%sは掛け金を設定してください>",player1);
		scanf("%d", &g1);
		p1 -= g1;
		printf("%sは掛け金を設定してください>",player2);
		scanf("%d", &g2);
		p2 -= g2;
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		printf("%sは1つ目のダイスを振ってください(何か数字を押してください)>",player1);
		scanf("%*d;", &a);
		printf("出た目は%dです", d1);
		printf("\n2つ目のダイスを振ってください(何か数字を押してください)>");
		scanf("%*d;", &a);
		printf("出た目は%dです", d2);
		printf("\n3つ目のダイスを振ってください(何か数字を押してください)>");
		scanf("%*d;", &a);
		printf("出た目は%dです", d3);
		max1 = d1 + d2 + d3;
		printf("\n\n%sの出目は%d,%d,%dの合計%dです\n",player1, d1, d2, d3, max1);

		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		printf("\n%sは1つ目のダイスを振ってください(何か数字を押してください)>",player2);
		scanf("%*d;", &a);
		printf("出た目は%dです", d1);
		printf("\n2つ目のダイスを振ってください(何か数字を押してください)>");
		scanf("%*d;", &a);
		printf("出た目は%dです", d2);
		printf("\n3つ目のダイスを振ってください(何か数字を押してください)>");
		scanf("%*d;", &a);
		printf("出た目は%dです", d3);
		max2 = d1 + d2 + d3;
		printf("\n\n%sの出目は%d,%d,%dの合計%dです\n",player2, d1, d2, d3, max2);
		if (max1 > max2) {
			b1 = g1 * 2;
			p1 += b1;
			printf("\nおめでとう！%sの勝ち！所持金は%dです！！\n",player1, p1);
			printf("残念。%sは掛け金を失いました。所持金は%dです。\n",player2, p2);
		}
		else {
			if (max1 < max2) {
				b2 = g2 * 2;
				p2 += b2;
				printf("\nおめでとう！%sの勝ち！所持金は%dです！！\n",player2, p2);
				printf("残念。%sは掛け金を失いました。所持金は%dです。\n",player1, p1);
			}
			else {
				p1 += g1;
				p2 += g2;
				printf("\n同点!掛け金が戻ってきます。もう一回遊べるドン！！\n");
			}
		}
	}
}