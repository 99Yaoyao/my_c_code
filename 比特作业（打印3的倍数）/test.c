#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//打印100以内3的倍数
//第一种写法
int main()
{
	int i = 0;
	for (i = 1; i <= 33; i++)
	{
		int a = 3 * i;	
		printf("%d ", a);
	}	
	return 0;
}

//第二种写法
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//第三种写法
int main()
{
	int i = 0;
	for (i = 3; i <= 100; i+=3)
	{
		printf("%d ", i);	
	}
	return 0;
}