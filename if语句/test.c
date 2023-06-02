#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int age = 100;
	if (age < 18)
		printf("未成年\n");
	else if(18<=age && age<=60)//错误写法(18<=age<=60),18<=100,判断为真，所以是1，1又<=60,也为真，所以判断通过，就会执行语句
		printf("成年\n");
	else
		printf("老年\n");


	return 0;
}


//题目：判断一个数是否为奇数；
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
	
//题目：输出1-100之间的奇数
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