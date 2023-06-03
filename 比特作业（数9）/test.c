#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//错误的，只统计了个位的9
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (a = 9; a < 100; a+=10)
//	{
//		i++;
//	}
//	printf("出现了%d次9", i);
//	return 0;
//}

int main()
{
	int a = 0;
	int i = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 10 == 9)
			i++;
		if (a / 10 == 9)
			i++;
	}
	printf("出现了%d次9", i);
	return 0;
}
