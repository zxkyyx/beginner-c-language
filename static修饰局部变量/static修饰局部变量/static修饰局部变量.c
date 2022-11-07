#define _CRT_SECURE_NO_WARNINGS
int test()
{
	int a = 1;
	a++;
}
int test2()
{
	int static a = 1;
	a++;
}
#include<stdio.h>
int main()
{
	int i = 0;
	int x = 0;
	int y = 0;
	while (i < 10)
	{
		x = test();
		y = test2();
		i++;
		printf("%d ", x);
		printf("%d\n", y);
	}
	return 0;
}