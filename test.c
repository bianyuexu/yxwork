#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>

void menu()
{
	printf("******************************\n");
	printf("********1.play 0.exit*********\n");
	printf("******************************\n");
}
//游戏的整个算法实现
void game()
{
	//数组存放走出的期盼信息
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}