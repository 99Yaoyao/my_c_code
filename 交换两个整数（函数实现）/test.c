#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��������������ֵ������
void swop(int x, int y)
{
	int z = 0;
	x = z;
	x = y;
	y = z;
}

int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��%d %d\n", a, b);
	swop(a, b);
	printf("������%d %d\n", a, b);
	return 0;
}

//��������������ֵ (��ȷ)
void swop(int* pa, int* pb)//��ַ��ָ�����
{
	int z = 0;
	z = *pa;//ͨ��ָ����ʵ���������a��b��ʵ��*pa*pb��ab����ϵ
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("����ǰ��%d %d\n", a, b);
	swop(&a, &b);//������ab�ĵ�ַ
	printf("������%d %d\n", a, b);

	return 0;
}