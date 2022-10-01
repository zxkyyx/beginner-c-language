 #define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	auto int i = 45;//和int i = 45;一样
	register int num = 56;//建议把num值放入寄存器中
	unsigned int a = -2;
	printf("%d", a);//输出为-2
	if (a > 0)
		printf("yes");
	else
		printf("no");
	//输出为yes
	return 0;
}