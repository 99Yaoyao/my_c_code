#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("****************************\n");
	printf("******   1. play   *********\n");
	printf("******   0. exit   *********\n");
	printf("****  ���ߣ�Τҫ�� *********\n");
	printf("****************************\n");
	printf("******* ��ѡ��1��0 *********\n");
}

void game()
{
	int a = rand() % 100 + 1;//�κ�����ģ��100��������0-99����һ�����������0-100
	                         //��32767����100=327��67 ����������32767-100x327=67
	
	int b = 0;
	
	while(a!=b)
	{
		printf("��������µ�����:");
		scanf("%d", &b);
		if (a > b)
		{
			printf("�´�������µ�����̫С��\n");
			Sleep(2000);
			system("cls");
		}
		else if (a < b)
		{
			printf("�´�������µ�����̫��\n");
			Sleep(2000);
			system("cls");
		}
		else
		{
			printf("��ϲ���ҵ��ˣ�\n");
			Sleep(2000);
			system("cls");
			break;
		}
		
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		scanf("%d", &input);
		system("cls");

		switch (input)
		{
		case 1:
			game();
			//system("cls");
			break;
		case 0:
			printf("�����˳�����\n");
			Sleep(2000);
			system("cls");
			break;
		default:
			printf("ѡ���������ѡ\n");
			Sleep(2000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}