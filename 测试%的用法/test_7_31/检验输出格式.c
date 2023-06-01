#include<stdio.h>

int main()
{
	signed int a;
	a = 1200000;
	printf("a is %c\n",a);//得出结果，%u与%d输出结果一致
						  //%c输出一个乱码，%f输出六位小数
						  //%o与%x分别输出对应八进制与十六进制数
						  //%e输出“1.51866e-306”
	return 0;
}