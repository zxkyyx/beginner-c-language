#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	const int num = 10;//有常属性的变量,还是变量，只是不能被改变
	printf("%d", num);
	return 0;
}