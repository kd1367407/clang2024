#include<stdio.h>
main()
{
	int nu, an,i;
	printf("数を入力");
	scanf("%d", &nu);
	//for文は初期値などがなくても問題ない。その場合はセミコロンだけ置いておく
	for (an=0,i = 0; nu!=-999; i ++) {
		an += nu;
		printf("数を入力");
		scanf("%d", &nu);
		
	}
	printf("合計=%d\t平均=%.3f\n", an, (float)an / i);

}