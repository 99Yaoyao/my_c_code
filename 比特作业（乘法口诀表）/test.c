#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�žų˷��ھ���
int main()
{
	int a = 0;
	int b = 0;

	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("%d*%d=%-2d ", a, b, a * b);
		}
		printf("\n");
	}

	return 0;
}

//�������еĳ˷��ھ���
void CFKJB(int x)
{
	int i = 0;
	for (i = 1; i <= x; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	CFKJB(a);
	return 0;
}