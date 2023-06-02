#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int inset = 0;
	printf("你还想着她吗？(选择0或1)\n");
	scanf("%d", &inset);
	if (inset == 1)
	{
		printf("傻逼\n");
	}
	else
	{
		printf("正确的！\n");
	}
	return 0;
}