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
	Iitebira(bira,ROW,COL);//��ʼ������
	Display(bira,ROW,COL);//��ʾ
	while (1)
	{
		PlayerMove( bira,ROW, COL);
		ret = IsWin(bira, ROW, COL);
		if (ret != ' ')
			break;
        Display(bira, ROW, COL);//��ʾ
		ComputerMove( bira, ROW,COL);
		ret = IsWin(bira, ROW, COL);
		if (ret != ' ')
			break;
		Display(bira, ROW, COL);//��ʾ


	}
	if (ret=='1'){
		printf("���Ӯ\n");
	}
	if (ret == '0'){
		printf("����Ӯ\n");
	}

	if (ret == 'Q'){
		printf("ƽ��\n");
	}
}
int main(){
	int input = 0;
	mun();
	srand((unsigned int)time(NULL));
	do
	{
		
		printf("�����룺 \n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:game();
		break;
		case 0:printf("�˳�\n");
			break;
		default:
			printf("��������\n");
			break;
		}


	} while (input);
	return 0;
}