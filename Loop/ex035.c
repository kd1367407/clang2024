#include<stdio.h>
main()
{
	int num, an;
	an = 0;
	printf("�������");
	scanf("%d", &num);
	while (1) {
		an += num;
		if (num == -999)break;//{}���Ȃ��ꍇ�A�ꕶ�������������B����̏ꍇ��if�`break;�܂�
		printf("�������");
		scanf("%d", &num);
	}
	printf("���v��%d", an);
}