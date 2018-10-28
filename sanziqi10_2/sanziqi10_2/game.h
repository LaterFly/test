#ifndef __GAME_H__
#define __GAME_H__
#include<time.h>
#include <string.h>
#include <stdlib.h>
#define  ROW 3//宏定义
#define  COL 3
void Iitebira(char bira[ROW][COL], int row, int col);//打印字符声明
void Display(char bira[ROW][COL],int row,int col );
void PlayerMove(char bira[ROW][COL], int row, int col);
void ComputerMove(char bira[ROW][COL], int row, int col);
char IsWin(char bira[ROW][COL], int row, int col);
int IsFull(char bira[ROW][COL], int row, int col);
#endif //__GAME_H__