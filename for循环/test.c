#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}

//����break��continue
int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		printf("%d ", i);
		if (i == 5)//��ӡ��5��ֹ
			break;
	}
	return 0;
}


int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (i == 5)//����5
			continue;
		printf("%d ", i);
		
	}
	return 0;
}

//forѭ���е�continue��while�е�����
int main()
{
	int i = 1;
	while (i<10)
	{
		if(i == 5)//ֻ��ӡ��4������5ʱ����ѭ������Ϊcontinue����������䣬ʹ��i++ʧЧ����forѭ���е�i++��������У����Բ���������for����������ѭ��
		continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}