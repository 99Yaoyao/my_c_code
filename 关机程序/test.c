#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

////使用goto语句
//int main()
//{
//	system("shutdown -s -t 10");//设置60秒内关机
//flag:
//	printf("\n\n\n\n\n\n                       请证明纳维尔-斯托克方程的存在性与光滑性，否则您的电脑将在10秒后关机！\n");
//	int a = 0;
//	char arr[20] = {0};
//	scanf("%s", &arr);
//	if (strcmp(arr, "123") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto flag;
//	}
//	
//	return 0;
//}

//使用循环
int main()
{
	system("shutdown -s -t 20");//设置60秒内关机
	while(1)
	{
		printf("\n\n\n\n\n\n                       罗霖帅不帅，说不出来你的电脑将在20秒后关机！\n");
		int a = 0;
		char arr[20] = { 0 };
		scanf("%s", &arr);
		if (strcmp(arr, "123") == 0)
		{
			system("shutdown -a");
			break;
		}
		system("cls");
	}
	return 0;
}