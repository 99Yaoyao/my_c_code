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
			printf("�����˳�����");
			Sleep(2000);
			system("cls");
			break;
		}
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(arr,password)==0)//strcmp��ר�űȽ�����ĺ��������ȽϽ������0ʱ���������
		{
			printf("������ȷ!������ת����\n");
			Sleep(1000);
			system("cls");
			break;
		}
		else
		{
			printf("�������������%d�λ��ᣬ����������\n",i-1);
			Sleep(1000);
			system("cls");
		}	
	}
	return 0;
}