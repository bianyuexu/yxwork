#include <stdio.h>

int Add (int x, int y)
{
	int z = 0;
    z = x + y;
    return z;
}
int main()
{
	int a = 10;
	int b = 10;
	int sum=Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}