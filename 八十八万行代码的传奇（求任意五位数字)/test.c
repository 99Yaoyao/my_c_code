#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 1;
	while (a)
	{
		char arr[5];
		scanf("%s", &arr);

		int i = 0;
		for (i = 0; arr[i] != '\0' && i < 5; i++);
		printf("��%dλ\nÿһλ�ֱ���:", i);
		for (i = 0; arr[i] != '\0' && i < 5; i++)
		{
			printf("%c ", arr[i]);
		}
		printf("\n���������");
		for (; i >= 0 ;)
		{
			i--;
			printf("%c", arr[i]);
		}
		printf("\n");
		scanf("%d", &a);
	}
	return 0;
}

//int main()
//{
//	int arr[5] = { 3,1,4,8,9 };
//	int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	/*printf("������������֣�");
//	//	scanf("%d", &arr[i]);*/
//	//}//��������
//	int a = 0;
//	for (a = 0; a<5; a++)
//	{
//		for (i = 1; i < 5; i++)
//		{
//			if (arr[a] < arr[i])
//			{
//				arr[i] = arr[a];
//				arr[a] = arr[i];
//			}
//		}
//	}
//	return 0;
//}