#include<stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n -2) + Fib(n - 1);//前两个数的和等于第三个数叫斐波那契数列
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