#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��������
	int k = 3;//Ҫ���ҵ�����
	int a = sizeof(arr) / sizeof(arr[0]);//�ܴ�С���Ե���Ԫ�ش�С��������Ԫ�صĸ���
	int left = 0;//���±�
	int right = a - 1;//���±�
	int mid = (left + right) / 2;//�м��±�
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
			printf("%dΪ��ѯ�����±�\n", mid);
			break;
		}
		
	}
	if (left > right)
	{
		printf("�޷�����\n");
	}
	return 0;
}