 #define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	auto int i = 45;//��int i = 45;һ��
	register int num = 56;//�����numֵ����Ĵ�����
	unsigned int a = -2;
	printf("%d", a);//���Ϊ-2
	if (a > 0)
		printf("yes");
	else
		printf("no");
	//���Ϊyes
	return 0;
}