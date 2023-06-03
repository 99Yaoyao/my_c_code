#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main()
{
	char arr1[] = { "welcome to bit!" };
	char arr2[] = { "###############" };
	int left = 0;//左下标
	int right = strlen(arr1) - 1;//右下标 
	for (;; left++, right--)
	{
		arr2[left] = arr1[left];//数组1的第一个元素替换掉数组2的第一个元素
		arr2[right] = arr1[right];//数组1的最后一个元素替换掉数组2的最后一个元素

		printf("%s\n", arr2);
		Sleep(1000); //停留1000毫秒
		system("cls");//清空屏幕

		if (left == right)//数组下标相等时，跳出循环
			break;
	}
	printf("%s\n", arr2);//因为循环中止时屏幕已经清空，所以还要再打印一次
	return 0;
}

//用while循环写
int main()
{
	char arr1[] = { "welcome to bit!" };
	char arr2[] = { "###############" };
	int left = 0;//左下标
	int right = strlen(arr1) - 1;//右下标 
	while(left<=right)
	{
		arr2[left] = arr1[left];//数组1的第一个元素替换掉数组2的第一个元素
		arr2[right] = arr1[right];//数组1的最后一个元素替换掉数组2的最后一个元素

		printf("%s\n", arr2);
		Sleep(1000); //停留1000毫秒
		system("cls");//清空屏幕

		left++;
		right--;
	}
	printf("%s\n", arr2);//因为循环中止时屏幕已经清空，所以还要再打印一次
	return 0;
}