#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu, ans, i,j;
	srand(time(0));
	rand();
	kazu = rand() % 100 + 1;
	printf("�����ăQ�[��\n1�`100�܂ł̐������Ȃ��񐔂œ��Ă�Q�[���B\n���ӁI���X�R���悗");
	i = 0;
	j = 0;
	
	while (1) {
		printf("\n1�`100�̐��������:");
		scanf("%d", &ans);
		if (ans > kazu) {
			j=rand() % 100 + 1;
			if (j <= 30){
				printf("%d���傫���ł�",ans);
			}
			if (j > 30){
				printf("%d��菬�����ł�", ans);
			}
			
			i++;
		}
		else {
			if (ans < kazu) {
				j = rand() % 100 + 1;
				if (j <= 30) {
					printf("%d��菬�����ł�",ans);
				}
				if (j > 30) {
					printf("%d���傫���ł�", ans);
				}
				i++;
			}
			else {
				 
					printf("������I�I");
					break;
				
			}
		}

	}
		printf("\n%d��Ő���", i);
		
}