#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main()
{
	char arr1[] = { "welcome to bit!" };
	char arr2[] = { "###############" };
	int left = 0;//���±�
	int right = strlen(arr1) - 1;//���±� 
	for (;; left++, right--)
	{
		arr2[left] = arr1[left];//����1�ĵ�һ��Ԫ���滻������2�ĵ�һ��Ԫ��
		arr2[right] = arr1[right];//����1�����һ��Ԫ���滻������2�����һ��Ԫ��

		printf("%s\n", arr2);
		Sleep(1000); //ͣ��1000����
		system("cls");//�����Ļ

		if (left == right)//�����±����ʱ������ѭ��
			break;
	}
	printf("%s\n", arr2);//��Ϊѭ����ֹʱ��Ļ�Ѿ���գ����Ի�Ҫ�ٴ�ӡһ��
	return 0;
}

//��whileѭ��д
int main()
{
	char arr1[] = { "welcome to bit!" };
	char arr2[] = { "###############" };
	int left = 0;//���±�
	int right = strlen(arr1) - 1;//���±� 
	while(left<=right)
	{
		arr2[left] = arr1[left];//����1�ĵ�һ��Ԫ���滻������2�ĵ�һ��Ԫ��
		arr2[right] = arr1[right];//����1�����һ��Ԫ���滻������2�����һ��Ԫ��

		printf("%s\n", arr2);
		Sleep(1000); //ͣ��1000����
		system("cls");//�����Ļ

		left++;
		right--;
	}
	printf("%s\n", arr2);//��Ϊѭ����ֹʱ��Ļ�Ѿ���գ����Ի�Ҫ�ٴ�ӡһ��
	return 0;
}