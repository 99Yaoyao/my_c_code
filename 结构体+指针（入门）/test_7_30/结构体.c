#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



struct ABC
{
	int a;
	char b;
	float c;
}x;



int main()
{
	/*void w(void);*/
	{
		x.a = 655;
		x.b = 28;
		x.c = 0x30;
	}

	int z = x.b;

	printf("z is %d\n", z);
	return 0;
}


//�������÷�
struct IP
{
	char name[20];
	int ago;
	float weight;

};

int main()
{
	struct IP a = { "������",24,114.514 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("�ҽ�%s,����%d�꣬�´�ѧ��������%fkg", a.name, a.ago, a.weight);//��������
	return 0;

}


//����ָ���д��
struct IP
{
	char name[20];
	int ago;
	float weight;

};

int main()
{
	struct IP a = { 0 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("�������������������䡢���أ�");
	scanf("%s %d %f", &a.name, &a.ago, &a.weight);//�Զ���������������

	struct IP* pa = &a;//�ṹ��ָ��

	printf("�ҽ�%s,����%d�꣬����%fkg\n", a.name, a.ago, a.weight);//�ӽṹ�����ֱ�ӵ�������
	printf("�ҽ�%s,����%d�꣬����%fkg\n", (*pa).name, (*pa).ago, (*pa).weight);//ָ������õ�������
	printf("�ҽ�%s,����%d�꣬����%fkg\n", pa->name, pa->ago,pa->weight);//ָ��ָ���ַ��������

	return 0;

}