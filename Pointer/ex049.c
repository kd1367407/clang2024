#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;//aという物件の管理人(p_a)を設定
	p_a = &a;//aの住所をp_aに格納
	b = *p_a;//p_aが管理するアドレス(住所)の中身(aの中身)をｂに格納
	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}