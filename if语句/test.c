#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int age = 100;
	if (age < 18)
		printf("δ����\n");
	else if(18<=age && age<=60)//����д��(18<=age<=60),18<=100,�ж�Ϊ�棬������1��1��<=60,ҲΪ�棬�����ж�ͨ�����ͻ�ִ�����
		printf("����\n");
	else
		printf("����\n");


	return 0;
}


//��Ŀ���ж�һ�����Ƿ�Ϊ������
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (0 == a % 2)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
}
	
//��Ŀ�����1-100֮�������
int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		if (1 == i % 2)
		{
			printf("%d ", i);
		}

	}
	return 0;
}

int main()
{
	int i = 0;
	for (i = 1; i < 100; i += 2)
	printf("%d ", i);
	return 0;
}