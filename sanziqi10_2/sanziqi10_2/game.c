#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
void Iitebira(char bira[ROW][COL], int row, int col){
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < row; i++){
	//	
	//	for (int j = 0; j < col; j++){
	//		bira[i][j] = '0';
	//		//printf(" ");//初始化
	//	}
	//}
	memset(&bira[0][0], ' ', row*col*sizeof(bira[0][0]));
}


void Display(char bira[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row;i++){
		int j = 0;
		for (j = 0; j < col;j++){
			printf(" %c ",bira[i][j]);
			if (j < col - 1){
				printf("|");
			}
		
		}
		printf("\n");
		if (i < row - 1){
			for (j = 0; j < col;j++){
				printf("___");
				if (j<col-1){
					printf("|");
				}
			}
			printf("\n");

		}
	
	}
	
}


void PlayerMove(char bira[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("玩家请: \n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x>=1&&x<=row&&y>=1&&y<=col){
			if (bira[x-1][y-1]==' ')//与数组下标对应,恒等于，字符空格
			{
				bira[x-1][y-1] = '1';
				break;//需跳出
			}
			else{
				printf("已有，请重新输入 \n");
			}
		
		}
		else
		{
			printf("出界 \n");
		}
	}
	
}


void ComputerMove(char bira[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("电脑走: \n");
	while (1)
	{
		x = rand() % row;//随机值
		y = rand() % col;
		if (x >= 1 && x <= row&&y >= 1 && y <= col){
			if (bira[x][y] == ' '){
				bira[x][y] = '0';//字符
				break;
			}

		}
	}
}

char IsWin(char bira[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row; i++){
		if (bira[i][0] == bira[i][1] && bira[i][1] == bira[i][2] && bira[i][0] != ' '){
			return bira[i][0];
		}
		for (i = 0; i < col; i++){
			if (bira[1][i] == bira[0][i] && bira[0][i] == bira[2][i] && bira[2][1] != ' '){
				return bira[0][i];
			}
			if (bira[1][1] == bira[0][0] && bira[0][0] == bira[2][2] && bira[1][1] != ' '){
				return bira[0][0];
			}

			if (bira[1][1] == bira[0][2] && bira[0][2] == bira[2][0] && bira[1][1] != ' '){
				return bira[0][2];
			}

			if (IsFull ==1 ){
				return 'Q';
			}

			return ' ';
			//int j = 0;
			/*for (j = 0; j < col;j++){

				if (bira[i][]){}
				}*/

		}

	}
}


int IsFull(char bira[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	
	for (i = 0; i < row; i++){
		
	  for ( j = 0; j < col; j++){
		  if (bira[i][j]==' '){
			  return 0;
		  }
			
		}
	}

	return 1;

}
