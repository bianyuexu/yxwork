#include<stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n -2) + Fib(n - 1);//ǰ�������ĺ͵��ڵ���������쳲���������
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}