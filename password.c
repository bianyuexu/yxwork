#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	getchar();
	printf("��ȷ�ϣ�Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ʧ��\n");
	}
	return 0;

}