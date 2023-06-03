#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//有序数组
	int k = 3;//要查找的数字
	int a = sizeof(arr) / sizeof(arr[0]);//总大小除以单个元素大小等于数组元素的个数
	int left = 0;//左下标
	int right = a - 1;//右下标
	int mid = (left + right) / 2;//中间下标
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else//arr[mid] = k
		{
			printf("%d为查询数的下标\n", mid);
			break;
		}
		
	}
	if (left > right)
	{
		printf("无法查找\n");
	}
	return 0;
}