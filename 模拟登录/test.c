#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>

int main()
{
	char arr[20] = "qwe123";
	char password[20] = { 0 };
	int i = 0;

	for (i = 3; i >= 0; i--)
	{
		if (i == 0)
		{
			printf("正在退出程序");
			Sleep(2000);
			system("cls");
			break;
		}
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(arr,password)==0)//strcmp是专门比较数组的函数，当比较结果等于0时，数组相等
		{
			printf("密码正确!正在跳转……\n");
			Sleep(1000);
			system("cls");
			break;
		}
		else
		{
			printf("密码错误，您还有%d次机会，请重新输入\n",i-1);
			Sleep(1000);
			system("cls");
		}	
	}
	return 0;
}