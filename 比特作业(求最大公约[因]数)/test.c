#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////�Լ�д��
//int main()
//{
//	int input = 1;
//	while (input)
//	{
//		int a = 0;
//		int b = 0;
//		scanf("%d%d", &a, &b);
//		if (a < b)
//		{
//			int i = 0;
//			if (b % a == 0)
//			{
//				printf("���Լ����%d\n", a);
//			}
//			else
//			{
//				i = a;
//				for (a = a - 1; b % a != 0 || i % a != 0; a--)
//				{
//					b % a;
//					i % a;
//				}
//				printf("���Լ����%d\n", a );
//			}
//		}
//
//		if (a > b)
//		{
//			int i = 0;
//			if (a % b == 0)
//			{
//				printf("���Լ����%d\n", b);
//			}
//			else
//			{
//				i = b;
//				for (b = b - 1; a % b != 0 || i % b != 0; b--)
//				{
//					a% b;
//					i% b;
//				}
//				printf("���Լ����%d\n", b);
//			}
//		}
//		if (a == b)
//		{
//			printf("���Լ����%d\n", b);
//		}
//		
//		scanf("%d", &input);
//		printf("\n");
//	}
//	return 0;
//}
//
////�����Ż�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("���Լ����%d\n", max);
//			break;
//		}
//		max--;
//	}
//}

//շת�����
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	while (c = a % b) 
	{
		a = b;
		b = c;
	}
	printf("���Լ����%d\n", b);
	
	return 0;
}
//�Լ�д��
int main()
{
	int m = 0;
	int n = 0;
	int sum = 0;
	scanf("%d%d", &m, &n);
	int tmp = m;
	if (m < n)
	{
		m = n;
		n = tmp;
	}
	if (m % n == 0)
	{
		printf("���Լ����%d\n", n);
	}
	else
	{
		while (1)
		{
			if (m % n != 0)
			{
				sum = m % n;
				m = n;
				n = sum;
			}
			else
				break;
		}
		printf("���Լ����%d\n", sum);
	}

	return 0;
}