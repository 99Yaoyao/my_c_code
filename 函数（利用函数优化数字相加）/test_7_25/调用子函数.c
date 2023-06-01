#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int sum, a, b;
	a = 5;
	b = 10;
	sum = a+b;
	printf("sum is %d\n",sum);
	return 0;
}

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int sum,a,b;
	scanf("%d %d", &a, &b);
	sum = Add(a, b);
	printf("sum = %d", sum);
	return 0;
}