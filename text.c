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
	//������������Ϣ
	char board[ROW][COL] = { 0 };
	iuitboard(board, ROW, COL);//��ʼ������
	//��ӡ����
	displayboard(board,ROW,COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("�����룺> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}