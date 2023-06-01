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


//更简便的用法
struct IP
{
	char name[20];
	int ago;
	float weight;

};

int main()
{
	struct IP a = { "李田所",24,114.514 };//结构体的创建和初始化
	printf("我叫%s,今年%d岁，事大学生，体重%fkg", a.name, a.ago, a.weight);//调用数据
	return 0;

}


//引用指针的写法
struct IP
{
	char name[20];
	int ago;
	float weight;

};

int main()
{
	struct IP a = { 0 };//结构体的创建和初始化
	printf("请输入您的姓名、年龄、体重：");
	scanf("%s %d %f", &a.name, &a.ago, &a.weight);//自定义姓名年龄体重

	struct IP* pa = &a;//结构体指针

	printf("我叫%s,今年%d岁，体重%fkg\n", a.name, a.ago, a.weight);//从结构体变量直接调用数据
	printf("我叫%s,今年%d岁，体重%fkg\n", (*pa).name, (*pa).ago, (*pa).weight);//指针解引用调用数据
	printf("我叫%s,今年%d岁，体重%fkg\n", pa->name, pa->ago,pa->weight);//指针指向地址调用数据

	return 0;

}