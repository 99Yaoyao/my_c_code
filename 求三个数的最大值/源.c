#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int z, a, b, c;
	scanf("%d %d %d",&z, &a, &b);
	c = max(z, a, b);
	printf("max=%d\n", c);
	return 0;

}

int max(int x, int y, int u)
{
	int q;
	if (x > y, x > u)
	{
		q = x;
	}
	if (y > x, y > u)
	{
		q = y;
	}
	if (u > x, u > y)
	{
		q = u;
	}
	return q;
}

//”≈ªØ
int main()
{
	int max, a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	printf("max=%d", max);
	return 0;
}
