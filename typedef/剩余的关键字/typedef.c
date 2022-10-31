#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	typedef unsigned int us;//类型重命名
	unsigned int num = 100;
	us num2 = -5;
	printf("%d", num2);
	return 0;
}