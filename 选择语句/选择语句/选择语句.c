#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input = 0;
	printf("��������ܼ����ȥ��?\n");
	printf("����������1�����ò�������0\n");
	scanf("%d", &input);
	if (input == 1)
		printf("������׵õ�����Ҫ��");
	else
		printf("�㽫ÿ����");
	return 0;
}