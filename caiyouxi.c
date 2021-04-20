#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*************MENU************\n");
	printf("************1.PLAY***********\n");
	printf("************0.EXIT***********\n");
	printf("*****************************\n");

}
void game()
{
	int randum = rand() % 100 + 1;
	int num = 0;
	printf("**开始游戏**\n");
	while (1)
	{
		printf("输入数字：");
		scanf("%d", &num);
		if (randum == num)
		{
			printf("猜对了\n");
			break;
		}
		else if (randum > num)
		{
			printf("猜小了\n");
		}
		else if (randum < num)
		{
			printf("猜大了\n");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
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
			printf("输入正确数字\n");
			break;
		}
	} 	while (input);
	
	return 0;
}