#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int M;
	scanf("%d", &M);
	if (M % 5 == 0)//模等于0就没有余数，没有余数就是被整除了
		printf("YES");
	else
		printf("NO");

	return 0;
}