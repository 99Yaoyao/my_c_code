#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//每调用一次函数，就将num的值加一
void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	Add(&num);
	printf("%d\n", num);

	return 0;
}