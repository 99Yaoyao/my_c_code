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
//�����Ż�
int year(int n)
{
	return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);//��Ϊ��������꣬������Ϊ�棬����ֱ��return����1��
	                                                    //����������꣬Ҳ��Ϊ�٣���Ϊ0������ֵ��0
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
	printf("\n\n��%d������\n", count);
	return 0;
}