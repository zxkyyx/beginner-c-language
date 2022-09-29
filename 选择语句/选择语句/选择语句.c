#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input = 0;
	printf("你觉得你能坚持下去吗?\n");
	printf("觉得能输入1，觉得不能输入0\n");
	scanf("%d", &input);
	if (input == 1)
		printf("你更容易得到你想要的");
	else
		printf("你将每天后悔");
	return 0;
}