#include<stdio.h>
main()
{
	int nu, an,i;
	printf("�������");
	scanf("%d", &nu);
	//for���͏����l�Ȃǂ��Ȃ��Ă����Ȃ��B���̏ꍇ�̓Z�~�R���������u���Ă���
	for (an=0,i = 0; nu!=-999; i ++) {
		an += nu;
		printf("�������");
		scanf("%d", &nu);
		
	}
	printf("���v=%d\t����=%.3f\n", an, (float)an / i);

}