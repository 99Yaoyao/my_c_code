#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int binary_search(int a[],int k,int s)
{
	int left = 0;
	int right = s - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
			break;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {60,30,20,50,100};
	int key = 30;
	int sz = sizeof(arr) / sizeof(arr[0]); 
	int ret = binary_search(arr,key,sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是%d\n",ret);
	}
	
	return 0;
}