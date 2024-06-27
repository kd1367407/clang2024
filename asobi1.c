#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p1 = 10000, p2 = 10000, d1, d2, d3, g1, g2, b1, b2, i;//pは所持金。dはダイス。gは掛け金。bは戻ってくる金。iはカウント数
	char name1[80];
	char* player1;
	char name2[80];
	char* player2;
	srand(time(0));
	rand();
	d1 = rand() % 6 + 1;
	d2 = rand() % 6 + 1;
	d3 = rand() % 6 + 1;
	i = 0;
	printf("チンチロ擬きです。10回試合して所持金の多いほうが勝ちです。");
	printf("\n名前を入力してください>");
	scanf("%s", &name1);
	player1 = name1;
	printf("\n名前を入力してください>");
	scanf("%s", &name2);
	player2 = name2;
	while (i <= 10) {
		if (p1 <= 0) {
			printf("%sの所持金が底をつきました。\n銀行へ行ってお金を下ろしてきてください。\n", player1);
			break;
		}
		if (p2 <= 0) {
			printf("%sの所持金が底をつきました。\n銀行へ行ってお金を下ろしてきてください。\n",player2);
			break;
		}
		printf("\n%sの現在の所持金は%dです\n", player1, p1);
		printf("\n%sは掛け金を設定してください>", player1);
		scanf("%d", &g1);
		p1 -= g1;

		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		printf("\n%sの出目は%d,%d,%dです\n", player1, d1, d2, d3);

		if (d1 != d2 != d3) {
			printf("役なし。%sは%d失います\n\n", player1, g1);
			i++;
		}
		else{
			if (d1 == 1 && d2 == 1 && d3 == 1) {
				b1 = g1 * 5;
				p1 += b1;
				printf("ピンゾロ！！\n%sは%dゲット！！\n", player1, b1);
				i++;
			}
			else {
				if (d1 == d2 == d3 && d1 != 1 && d2 != 1 && d3 != 1) {
					b1 = g1 * 3;
					p1 += b1;
					printf("ゾロ目！\n%sは%dゲット！！\n", player1, b1);
					i++;
				}
				else {
					if (d1 <= 3 && d2 <= 3 && d3 <= 3 && d1 != d2 != d3) {
						b1 = g1 * 2;
						p1 -= b1;
						printf("ヒフミ…\n%sは%d失います\n", player1, b1);
						i++;
					}
					else {
						if (d1 == d2 || d1 == d3 || d2 == d3) {
							p1 += g1;
							printf("通常の目。掛け金が戻ってきます\n", player1, p1);
							i++;
						}
						else {
							if (d1 >= 4 && d1 <= 6 && d2 >= 4 && d2 <= 6 && d3 >= 4 && d3 <= 6 && d1 != d2 != d3) {
								b1 = g1 * 2;
								p1 += b1;
								printf("ジゴロ！\n%sは%dゲット！！\n", player1, b1);
								i++;
							}
							else {
								if (d1 != d2 != d3) {
									printf("役なし。%sは%d失います\n\n", player1, g1);
									i++;

								}
							}
						}
					}
				}
			}
		}
		
	
		printf("\n%sの現在の所持金は%dです\n", player2, p2);
		printf("%sは掛け金を設定してください>", player2);
		scanf("%d", &g2);
		p2 -= g2;
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		d3 = rand() % 6 + 1;
		printf("\n%sの出目は%d,%d,%dです\n", player2, d1, d2, d3);
		if (d1 == 1 && d2 == 1 && d3 == 1) {
			b2 = g2 * 5;
			p2 += b2;
			printf("ピンゾロ！！\n%sは%dゲット！！\n", player2, b2);
			i++;
		}
		else {
			if (d1 == d2 == d3 && d1 != 1 && d2 != 1 && d3 != 1) {
				b2 = g2 * 3;
				p2 += b2;
				printf("ゾロ目！\n%sは%dゲット！\n", player2, b2);
				i++;
			}
			else {
				if (d1 <= 3 && d2 <= 3 && d3 <= 3 && d1 != d2 != d3) {
					b2 = g2 * 2;
					p2 -= b2;
					printf("ヒフミ…\n%sは%d失います\n", player2, b2);
					i++;
				}
				else {
					if (d1 == d2 || d1 == d3 || d2 == d3) {
						p2 += g2;
						printf("通常の目。%sに掛け金が戻ってきます\n", player2, b2);
						i++;
					}
					else {
						if (d1 >= 4 && d1 <= 6 && d2 >= 4 && d2 <= 6 && d3 >= 4 && d3 <= 6 && d1 != d2 != d3) {
							b2 = g2 * 2;
							p2 += b2;
							printf("ジゴロ！\n%sは%dゲット！！\n",player2, b2);
							i++;
						}
						else {
							printf("役なし。\n%sは%d失います\n", player2, g2);
							i++;
						}
					}
				}
			}
		}
	}
	if (p1 > p2) {
		printf("%sの勝利！", player1);
	}
	else {
		if (p1 < p2) {
			printf("%sの勝利！",player2);
		}
	}
}
