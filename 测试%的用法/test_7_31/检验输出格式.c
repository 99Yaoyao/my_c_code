#include<stdio.h>

int main()
{
	signed int a;
	a = 1200000;
	printf("a is %c\n",a);//�ó������%u��%d������һ��
						  //%c���һ�����룬%f�����λС��
						  //%o��%x�ֱ������Ӧ�˽�����ʮ��������
						  //%e�����1.51866e-306��
	return 0;
}