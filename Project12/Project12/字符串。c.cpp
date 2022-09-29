#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "hello";
	char arr2[] = { 'h', 'e', 'l', 'l', 'o' };
	printf("%s\n", arr);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr2));
	return 0;
}