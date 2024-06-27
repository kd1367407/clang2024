
#include <stdio.h>
#include <string.h>
#define CNT 4 //配列のサイズ
	main()
	{
		char *p_tbl[] = { "Programming2", "Algorithm", "Programming1", "C" }, *w;//Cも文字列。""で囲まれているから
		int i, j;
		for (i = 0; i < CNT - 1; i++) {
			for (j = i + 1; j < CNT; j++) {
				if (strcmp(p_tbl[i], p_tbl[j]) > 0) {
					w = p_tbl[i];
					p_tbl[i] = p_tbl[j];
					p_tbl[j] = w;
				}
			}
		}
		for (i = 0; i < CNT; i++) {
			printf("%s\n", p_tbl[i]);
		}
	}//一番小さい文字列はAがあるAlgorithmで次にC。その次はPの二つだが、１と２の違いで１になる
