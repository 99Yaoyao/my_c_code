#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

////ʹ��goto���
//int main()
//{
//	system("shutdown -s -t 10");//����60���ڹػ�
//flag:
//	printf("\n\n\n\n\n\n                       ��֤����ά��-˹�п˷��̵Ĵ�������⻬�ԣ��������ĵ��Խ���10���ػ���\n");
//	int a = 0;
//	char arr[20] = {0};
//	scanf("%s", &arr);
//	if (strcmp(arr, "123") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto flag;
//	}
//	
//	return 0;
//}

//ʹ��ѭ��
int main()
{
	system("shutdown -s -t 20");//����60���ڹػ�
	while(1)
	{
		printf("\n\n\n\n\n\n                       ����˧��˧��˵��������ĵ��Խ���20���ػ���\n");
		int a = 0;
		char arr[20] = { 0 };
		scanf("%s", &arr);
		if (strcmp(arr, "123") == 0)
		{
			system("shutdown -a");
			break;
		}
		system("cls");
	}
	return 0;
}