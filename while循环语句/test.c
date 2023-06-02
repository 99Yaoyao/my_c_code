#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//for引导的死循环
int main()
{
	int c = 1;
	for (c = 1;; c++)
	{
		printf("%d\n", c);

	}

	return 0;
}

//while引导的死循环
int main()
{
	int c = 1;
	while (c > 0)
	{
		printf("想你:%d\n", c);
		c++;

	}

	return 0;
}

//普通循环
int main()
{
	int c = 10000;
	while(c>10000)
	{
		printf("想你:%d\n",c);
		c++;

	}
	if (c >10000)
	{
		printf("还是忘却你了:%d\n");
	}

	return 0;
}
