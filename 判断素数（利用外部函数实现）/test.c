#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int su(int a)
//{
//	int n = 0;
//	for (n = 2; n <= a; n++)
//	{
//		if (a % n == 0)
//			break;
//	}
//	if (a == n)
//	{
//		return 1;
//	}
//}
//Åô¸çÐ´µÄ
int su(int a)
{
	int n = 0;
	for (n = 2; n < a; n++)
	{
		if (a % n == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i < 200; i += 2)
	{
		if (su(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n\n%d\n ", count);
	return 0;
}