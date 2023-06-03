#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	for (a = 1000; 2000 >= a; a++)
	{
		if (a % 4 == 0 && a % 100 != 0)
		{
			printf("%d ",a);
			b++;
		}
		if (a % 400 == 0)
		{
			printf("%d ", a);
			b++;
		}
	}
	printf("\n\n有%d个闰年\n", b);
	return 0;
}

//优化
int main()
{
	int a = 0;
	int b = 0;
	for (a = 1000; 2000 >= a; a++)
	{
		if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
		{
			printf("%d ", a);
			b++;
		}
	}
	printf("\n\n有%d个闰年\n", b);
	return 0;
}
