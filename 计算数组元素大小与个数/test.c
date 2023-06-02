#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[5] = { 0 };//每一个下标都是一个int，占4个byte

	printf("数组的大小是 %d byte\n", sizeof(arr));//arr大小=个数乘以4byte（5x4）

	int geshu = sizeof(arr) / sizeof(arr[0]);//个数=大小除以4byte（20/4）

	printf("数组的个数是 %d 个", geshu);

	
	return 0;
}