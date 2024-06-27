#include<stdio.h>
enum BitState
{
	Base=0,//00000000
	Poison=1<<0,//00000001
	Sleep=1<<1,//00000010
	Paralysis=1<<2,//00000100
	Burn=1<<3,//00001000
	AtkUp=1<<4,//00010000
	AtkDoun=1<<5//00100000
};
typedef unsigned int Uint;
//��Ԃ̕\��
void DisplayStatus(Uint s);
//��Ԃ̕ύX
void ChangeFlag(Uint* s);
//��Ԃ̉�
void ClearFlag(Uint* s);
main()
{
	Uint MyState = Base;
	ChangeFlag(&MyState);//&MyState�ŃA�h���X��n��
	//DisplayStatus(MyState);
	ClearFlag(&MyState);
	//DisplayStatus(MyState);
}

void DisplayStatus(Uint s) {
	printf("****���݂̏��****\n");
	if (s & Poison) {
		printf("��\n");//�e��Ԃ��A���h���Z���Ċm�F���Ă�
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s&Paralysis) {
		printf("���\n");
	}
	if (s&Burn) {
		printf("�Ώ�\n");
	}
	if (s&AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s&AtkDoun) {
		printf("�U���̓_�E��\n");
	}
	if (s == Base) {
		printf("��Ԉُ�Ȃ�\n");
	}
	printf("******************\n");
}

void ChangeFlag(Uint* s) {//�|�C���^�ɒ���
	int select;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ�t�^���܂���?\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��>");
		scanf("%d", &select);
		if (select == 0) {
			break;
		}
		switch(select) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDoun;
			break;
		default://1~6�ȊO�̒l�̎�
			break;
		}
	}
}

void ClearFlag(Uint* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ��������܂���?\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�S���� 0:�I��>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDoun;
			break;
		case 7:
			*s &= Base;
		default:
			break;
		}
	}
}