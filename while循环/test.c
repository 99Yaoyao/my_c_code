#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//常规用法
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

//使用break用法
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

//getchar用法
int main()
{
	int i = 0;
	while ((i = getchar()) != EOF)//输入字符且没有错误或文件结束符
	{
		putchar(i);//输出i存放的字符
	}
	return 0;
}