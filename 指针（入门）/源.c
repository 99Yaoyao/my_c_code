#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 22,3,64,165,1,86,2,66,245,8 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ÓÃÖ¸Õë
int main()
{
	int arr[10] = { 22,3,64,165,1,86,2,66,245,8 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	
	return 0;
}