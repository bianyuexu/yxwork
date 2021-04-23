#include<stdio.h>
int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
{
	if (n <= 1)
		return 1;
	else
		return n * fac1(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret= fac1(n);
	printf("%d\n", ret);
	return 0;
}