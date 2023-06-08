#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	void print(unsigned int);
	void unprint(unsigned int);
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);//print函数作用：输入任意数，按顺序输出每一位
	printf("\n");
	unprint(num);
	return 0;
}

void print(unsigned int n)//顺序输出
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

void unprint(unsigned int n)//逆序输出
{
	printf("%d ", n % 10);
	if (n > 9)
		unprint(n / 10);
}
