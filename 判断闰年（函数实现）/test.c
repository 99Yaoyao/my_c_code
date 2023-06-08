#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int year(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0; 
	}
}
//鹏哥优化
int year(int n)
{
	return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);//因为如果是闰年，条件均为真，所以直接return返回1，
	                                                    //如果不是闰年，也就为假，假为0，返回值是0
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (year(i) == 1)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\n\n有%d个闰年\n", count);
	return 0;
}