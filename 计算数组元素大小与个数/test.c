#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[5] = { 0 };//ÿһ���±궼��һ��int��ռ4��byte

	printf("����Ĵ�С�� %d byte\n", sizeof(arr));//arr��С=��������4byte��5x4��

	int geshu = sizeof(arr) / sizeof(arr[0]);//����=��С����4byte��20/4��

	printf("����ĸ����� %d ��", geshu);

	
	return 0;
}