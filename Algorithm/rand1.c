#include<stdio.h>
#include<stdlib.h>//�������g���Ƃ��ɕK�v
#include<time.h>//�������g���Ƃ��ɕK�v
main()
{
	int kazu;
	srand(time(0));//�������������i�V���b�t���j
	rand();//rand�̋�ǂ݂Ƃ����e�N�j�b�N�B�ŏ��̈��͐��l���΂邩��
	kazu = rand();//0����32767�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
}