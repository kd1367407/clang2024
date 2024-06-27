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
//状態の表示
void DisplayStatus(Uint s);
//状態の変更
void ChangeFlag(Uint* s);
//状態の回復
void ClearFlag(Uint* s);
main()
{
	Uint MyState = Base;
	ChangeFlag(&MyState);//&MyStateでアドレスを渡す
	//DisplayStatus(MyState);
	ClearFlag(&MyState);
	//DisplayStatus(MyState);
}

void DisplayStatus(Uint s) {
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");//各状態をアンド演算して確認してる
	}
	if (s & Sleep) {
		printf("眠り\n");
	}
	if (s&Paralysis) {
		printf("麻痺\n");
	}
	if (s&Burn) {
		printf("火傷\n");
	}
	if (s&AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s&AtkDoun) {
		printf("攻撃力ダウン\n");
	}
	if (s == Base) {
		printf("状態異常なし\n");
	}
	printf("******************\n");
}

void ChangeFlag(Uint* s) {//ポインタに注意
	int select;
	while (1) {
		DisplayStatus(*s);
		printf("どの状態を付与しますか?\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
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
		default://1~6以外の値の時
			break;
		}
	}
}

void ClearFlag(Uint* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("どの状態を解除しますか?\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:全解除 0:終了>");
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