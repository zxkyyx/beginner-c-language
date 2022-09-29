#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
extern int v_gal;
int main()
{
	printf("1:%d\n", v_gal);
	{
		printf("2:%d\n", v_gal);
	}
	printf("3:%d\n", v_gal);
	return 0;
}