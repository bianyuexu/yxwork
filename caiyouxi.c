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
	printf("**��ʼ��Ϸ**\n");
	while (1)
	{
		printf("�������֣�");
		scanf("%d", &num);
		if (randum == num)
		{
			printf("�¶���\n");
			break;
		}
		else if (randum > num)
		{
			printf("��С��\n");
		}
		else if (randum < num)
		{
			printf("�´���\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ȷ����\n");
			break;
		}
	} 	while (input);
	
	return 0;
}