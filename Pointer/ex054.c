#include<stdio.h>
main()
{
	int itb[3] = { 10,20,30 };
	int *p_itb;
	double dtb[3] = { 10.0,20.0,30.0 };
	double *p_dtb;

	
	p_itb = itb;
	printf("p_itb=%d\t", *p_itb);
	p_itb++;
	printf("%d\t", *p_itb);
	p_itb++;//�|�C���^�ϐ��̉����Z�͉��|�C���^���ɂ���Čv�Z�����ʂ��ω��iint��4�o�C�g�j
	printf("%d\n", *p_itb);

	p_dtb = dtb;
	printf("p_dtb=%.1f\t" ,*p_dtb);
	p_dtb++;
	printf("%.1f\t", *p_dtb);
	p_dtb++;
	printf("%.1f\n", *p_dtb);
}