#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int b = 0;
//		for (b = 2; b <= a; b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}
//		}
//		if (a== b)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//
////��һ��д��
//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int b = 0;
//		int flag = 1;
//		for (b = 2; b < a; b++)
//		{
//			if (a % b == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//
////�Ż�
//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		int b = 0;
//		int flag = 1;
//		for (b = 2; b <= sqrt(a); b++)//��ƽ��a
//		{
//			if (a % b == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//�Ż�x2
int main()
{
	int a = 0;
	for (a = 1; a <= 1000000; a+=2)//ż�����������������Դ�������ʼ�ж�
	{
		int b = 0;
		int flag = 1;
		for (b = 2; b <= sqrt(a); b++)//��ƽ��a
		{
			if (a % b == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", a);
		}
	}
	return 0;
}