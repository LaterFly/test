#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
void mun(){
	printf("###################\n");
	printf("##1. play #########\n");
	printf("##0. exit #########\n");
	printf("###################\n");


}

void game(){
	char bira[ROW][COL] = {' 0 '};
	char ret = 0;
	Iitebira(bira,ROW,COL);//初始化棋盘
	Display(bira,ROW,COL);//显示
	while (1)
	{
		PlayerMove( bira,ROW, COL);
		ret = IsWin(bira, ROW, COL);
		if (ret != ' ')
			break;
        Display(bira, ROW, COL);//显示
		ComputerMove( bira, ROW,COL);
		ret = IsWin(bira, ROW, COL);
		if (ret != ' ')
			break;
		Display(bira, ROW, COL);//显示


	}
	if (ret=='1'){
		printf("玩家赢\n");
	}
	if (ret == '0'){
		printf("电脑赢\n");
	}

	if (ret == 'Q'){
		printf("平局\n");
	}
}
int main(){
	int input = 0;
	mun();
	srand((unsigned int)time(NULL));
	do
	{
		
		printf("请输入： \n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:game();
		break;
		case 0:printf("退出\n");
			break;
		default:
			printf("重新输入\n");
			break;
		}


	} while (input);
	return 0;
}