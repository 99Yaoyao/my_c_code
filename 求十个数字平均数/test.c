#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	//��a[0]��a[9]��ֵ
	int sum=0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	int pingjun;
	pingjun =sum/ 10;
	printf("pingjun=%d", pingjun);
	//��ƽ��
	return 0;
}

//�Ż�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a[10] = { 0 };
	int i = 0;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", a[i]);
		sum = sum + a[i];
	}
	
	int pingjun;
	pingjun = sum / 10;
	printf("ƽ����=%d", pingjun);
	return 0;
}