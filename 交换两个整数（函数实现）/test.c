#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//交换两个变量的值（错误）
void swop(int x, int y)
{
	int z = 0;
	x = z;
	x = y;
	y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：%d %d\n", a, b);
	swop(a, b);
	printf("交换后：%d %d\n", a, b);
	return 0;
}

//交换两个变量的值 (正确)
void swop(int* pa, int* pb)//地址用指针接收
{
	int z = 0;
	z = *pa;//通过指针访问到主函数的a与b，实现*pa*pb与ab的联系
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("交换前：%d %d\n", a, b);
	swop(&a, &b);//发送了ab的地址
	printf("交换后：%d %d\n", a, b);

	return 0;
}