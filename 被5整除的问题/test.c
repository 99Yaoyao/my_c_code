#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int M;
	scanf("%d", &M);
	if (M % 5 == 0)//ģ����0��û��������û���������Ǳ�������
		printf("YES");
	else
		printf("NO");

	return 0;
}