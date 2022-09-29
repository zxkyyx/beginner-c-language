#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a = 10;
int main()
{
	int a = 100;
	printf("%d", a);
	return 0;
}//最后输出为100，局部变量优先于全局变量