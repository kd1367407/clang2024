#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char *p_data,  *p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data[]=%s\n", p_data);//%s�̎��̓A�h���X���w�肷��
	while (*p_data2++ = *p_data++);//������̃R�s�[ char*strcpy(*p_data2, *p_data)�ł�������
	p_data2 = data2;
	printf("data2[]=%s\n", p_data2);
	while (*p_data2) {//\0���U�Ƃ��Ĉ���
		putchar(*p_data2++);
	}
	putchar('\n');
}