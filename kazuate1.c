#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu, ans, i,j;
	srand(time(0));
	rand();
	kazu = rand() % 100 + 1;
	printf("数当てゲーム\n1～100までの数を少ない回数で当てるゲーム。\n注意！時々嘘つくよｗ");
	i = 0;
	j = 0;
	
	while (1) {
		printf("\n1～100の数字を入力:");
		scanf("%d", &ans);
		if (ans > kazu) {
			j=rand() % 100 + 1;
			if (j <= 30){
				printf("%dより大きいです",ans);
			}
			if (j > 30){
				printf("%dより小さいです", ans);
			}
			
			i++;
		}
		else {
			if (ans < kazu) {
				j = rand() % 100 + 1;
				if (j <= 30) {
					printf("%dより小さいです",ans);
				}
				if (j > 30) {
					printf("%dより大きいです", ans);
				}
				i++;
			}
			else {
				 
					printf("当たり！！");
					break;
				
			}
		}

	}
		printf("\n%d回で正解", i);
		
}