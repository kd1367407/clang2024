#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	c = getchar();//1�������͂���c�ɕ����̕����R�[�h���������
	while (c != EOF) {//c��EOF�łȂ��ԌJ��Ԃ��B�v�����ctrl Z�����͂����܂ŌJ��Ԃ�
		putchar(c);//c�̏o��
		putchar('\n');
		gets(dumy);//ABC�Ɠ��͂����ꍇ�A�o�͂����̂�A�̂݁B����͈ꕶ��������putchar������Bgets(dum)�͎c���BC����̓o�b�t�@�������
		c = getchar();
	}
}