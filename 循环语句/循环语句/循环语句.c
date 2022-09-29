#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int times = 0;
	printf("如果你对我说520遍我爱你的话我们就结婚了\n");
	while (times < 520)
	{
		printf("我爱你 ");
		times++;
	}
	printf("\n我们结婚了");
	return 0;
}