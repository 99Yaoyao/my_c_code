#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//随机数的阶乘
int main()
{
	int i = 0;
	int a = 0;
	int sum = 1;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		sum = sum * i;
	}
	printf("%d\n", sum);
	return 0;
}

//计算  1!+2!+3!+……+10！
int main()
{
	int i = 0;
	int a = 0;
	int sum = 1;
	int art = 0;
	for (a = 1; a <= 10; a++)
	{
		for (i = 1,sum=1; i <= a; i++)
		{
			sum = sum * i;		
		}
		art = art + sum;
	}
	printf("%d\n", art);
	return 0;
}

//优化
int main()
{
	int i = 0;
	int sum = 1;
	int art = 0;
	
	for (i = 1; i <= 10; i++)
	{
			sum *= i;
			art +=sum;
	}
		
	printf("%d\n", art);
	return 0;
}