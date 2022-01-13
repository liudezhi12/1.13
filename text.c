#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*********************************\n");
	printf("*******1.play         0.exit*****\n");
	printf("*********************************\n");
}
void game()
{
	//数组存放棋盘信息
	char board[ROW][COL] = { 0 };
	iuitboard(board, ROW, COL);//初始化棋盘
	//打印棋盘
	displayboard(board,ROW,COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入：> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}