#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����÷�
int main()
{
	int i = 1;
	while (i <= 20)
	{
		printf("%d ", i);
		i+=2 ;
	}
	
	return 0;
}

//ʹ��break�÷�
int main()
{
	int i = 1;
	while (i <= 20)
	{
		printf("%d ", i);
		i += 2;
		if (i == 15)
			break;
	}

	return 0;
}

//getchar�÷�
int main()
{
	int i = 0;
	while ((i = getchar()) != EOF)//�����ַ���û�д�����ļ�������
	{
		putchar(i);//���i��ŵ��ַ�
	}
	return 0;
}