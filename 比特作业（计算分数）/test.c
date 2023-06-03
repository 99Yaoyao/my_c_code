#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	double a = 0, b = 0, c = 0, sum = 0;

	for (a = 1, b = 2; a < 100; a+=2,b+=2)
	{	
		c = (1 / a) - (1 / b);
		sum = sum + c;
	}
	printf("%lf", sum);

	return 0;
}

////ÓÅ»¯
//int main()
//{
//	double a = 0, sum = 0,flag = 1;
//
//	for (a = 1 ; a <= 100; a++)
//	{
//		sum += flag * 1 / a;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//
//	return 0;
//}