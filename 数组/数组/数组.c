#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char arr1[5] = { 'a','b','c' };//����ȫ��ʼ��
	int i = 0;
	while (i < 10)
	{
		printf("%c ", arr1[i]);
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}