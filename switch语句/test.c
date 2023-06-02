#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 0;//整形
	scanf("%d", &a);
	switch (a)//整形表达式
	{
	case 1://须是整形常量表达式
		printf("win");
		break;
	case 2:
		printf("loser");
		break;
	case 3:
		printf("hero");
		break;
	}
	return 0;
}


//不一样的用法
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:	
	case 3:
		printf("win");//输入123打印win
		break;
	case 4:
	case 5:
		printf("loser");//输入45打印loser
		break;
	}
	return 0;
}

