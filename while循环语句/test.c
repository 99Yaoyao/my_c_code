#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//for��������ѭ��
int main()
{
	int c = 1;
	for (c = 1;; c++)
	{
		printf("%d\n", c);

	}

	return 0;
}

//while��������ѭ��
int main()
{
	int c = 1;
	while (c > 0)
	{
		printf("����:%d\n", c);
		c++;

	}

	return 0;
}

//��ͨѭ��
int main()
{
	int c = 10000;
	while(c>10000)
	{
		printf("����:%d\n",c);
		c++;

	}
	if (c >10000)
	{
		printf("������ȴ����:%d\n");
	}

	return 0;
}
