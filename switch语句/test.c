#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;//����
	scanf("%d", &a);
	switch (a)//���α��ʽ
	{
	case 1://�������γ������ʽ
		printf("win");
		break;
	case 2:
		printf("loser");
		break;
	case 3:
		printf("hero");
		break;
	}
	return 0;
}


//��һ�����÷�
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:	
	case 3:
		printf("win");//����123��ӡwin
		break;
	case 4:
	case 5:
		printf("loser");//����45��ӡloser
		break;
	}
	return 0;
}

