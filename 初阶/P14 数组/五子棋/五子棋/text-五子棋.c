#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game-������.h"
void Begin()
{
	printf("*************************\n");
	printf("****�Ƿ������Ϸ<0/1>****\n");
	printf("*************************\n");
}
void Game(char chessboard[ROW][COL],int row,int col)
{
	int ret = 0;
	//��ʼ������
	Initialization_brard(chessboard, row, col);
	//��ӡ����
	Print_board(chessboard, row, col);
	while(1)
	{
		//������
		Men_chess(chessboard, row, col);
		Print_board(chessboard, row, col);
		ret=Is_win(chessboard, row, col);
		if (ret == 1)
		{
			printf("��Ӯ��");
			break;
		}
		else if (ret == 2)
		{
			printf("ƽ");
			break;
		}
		//��������
		Computer_chess(chessboard, row, col);
		Print_board(chessboard, row, col);
		ret = Is_win(chessboard, row, col);
		if (ret == 0)
		{
			printf("������");
			break;
		}
		else if (ret == 2)
		{
			printf("ƽ\n");
			break;
		}
	}
}
int main()
{
	int a = 0;
	char chessboard[ROW][COL] = { ' '};
	srand(time(NULL));
	//������Ϸ
	do
	{
		Begin();
		scanf("%d", &a);
		switch(a)
		{
		case 0:
			printf("�˳���Ϸ");
			break;
		case 1:
			Game(chessboard, ROW, COL);
			break;
		defult:
			printf("�����������������");
			break;
		}
	} while (a);
	return 0;
}