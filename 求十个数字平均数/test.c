#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	//给a[0]到a[9]赋值
	int sum=0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	int pingjun;
	pingjun =sum/ 10;
	printf("pingjun=%d", pingjun);
	//求平均
	return 0;
}

//优化
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a[10] = { 0 };
	int i = 0;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", a[i]);
		sum = sum + a[i];
	}
	
	int pingjun;
	pingjun = sum / 10;
	printf("平均数=%d", pingjun);
	return 0;
}