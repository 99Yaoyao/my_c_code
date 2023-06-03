#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("****************************\n");
	printf("******   1. play   *********\n");
	printf("******   0. exit   *********\n");
	printf("****  作者：韦耀曜 *********\n");
	printf("****************************\n");
	printf("******* 请选择1或0 *********\n");
}

void game()
{
	int a = rand() % 100 + 1;//任何数字模上100，余数是0-99，加一，随机数就是0-100
	                         //如32767除以100=327余67 ，余数是拿32767-100x327=67
	
	int b = 0;
	
	while(a!=b)
	{
		printf("请输入你猜的数字:");
		scanf("%d", &b);
		if (a > b)
		{
			printf("猜错啦！你猜的数字太小咯\n");
			Sleep(2000);
			system("cls");
		}
		else if (a < b)
		{
			printf("猜错啦！你猜的数字太大咯\n");
			Sleep(2000);
			system("cls");
		}
		else
		{
			printf("恭喜你找到了！\n");
			Sleep(2000);
			system("cls");
			break;
		}
		
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//打印菜单
		scanf("%d", &input);
		system("cls");

		switch (input)
		{
		case 1:
			game();
			//system("cls");
			break;
		case 0:
			printf("正在退出……\n");
			Sleep(2000);
			system("cls");
			break;
		default:
			printf("选择错误，请重选\n");
			Sleep(2000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}