#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>



int main()
{
	int input = 1;
	while (input)
	{
		system("cls");
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (a < b)
		{
			int tem = a;
			a = b;
			b = tem;
		}
		if (a < c)
		{
			int tem = a;
			a = c;
			c = tem;
		}
		if (b < c)
		{
			int tem = b;
			b = c;
			c = tem;
		}
		printf("�Ӵ�С����Ϊ%d,%d,%d\n������1��0ѡ��������˳�", a, b, c);
		scanf("%d", &input);
	}
	return 0;
}