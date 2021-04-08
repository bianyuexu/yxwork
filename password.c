#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	getchar();
	printf("请确认（Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("失败\n");
	}
	return 0;

}