#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ӡ100����3�ı���
//��һ��д��
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

//�ڶ���д��
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

//������д��
int main()
{
	int i = 0;
	for (i = 3; i <= 100; i+=3)
	{
		printf("%d ", i);	
	}
	return 0;
}