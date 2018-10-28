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
	//		//printf(" ");//��ʼ��
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
	printf("�����: \n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x>=1&&x<=row&&y>=1&&y<=col){
			if (bira[x-1][y-1]==' ')//�������±��Ӧ,����ڣ��ַ��ո�
			{
				bira[x-1][y-1] = '1';
				break;//������
			}
			else{
				printf("���У����������� \n");
			}
		
		}
		else
		{
			printf("���� \n");
		}
	}
	
}


void ComputerMove(char bira[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	printf("������: \n");
	while (1)
	{
		x = rand() % row;//���ֵ
		y = rand() % col;
		if (x >= 1 && x <= row&&y >= 1 && y <= col){
			if (bira[x][y] == ' '){
				bira[x][y] = '0';//�ַ�
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
