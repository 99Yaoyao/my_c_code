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

//加入break与continue
int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		printf("%d ", i);
		if (i == 5)//打印到5中止
			break;
	}
	return 0;
}


int main()
{
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (i == 5)//跳过5
			continue;
		printf("%d ", i);
		
	}
	return 0;
}

//for循环中的continue与while中的区别
int main()
{
	int i = 1;
	while (i<10)
	{
		if(i == 5)//只打印到4，等于5时会死循环。因为continue跳过后面语句，使得i++失效，而for循环中的i++不在语句中，所以不会跳过，for不会陷入死循环
		continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}