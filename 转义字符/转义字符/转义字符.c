#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("%c\n", '\'');//输出单撇号
	printf("%s\n", "\"");//输出双撇号
	printf("%c\n", '\?');//输出问号
	printf("%c\n", '?');//现在的编译器输出问号已经不需要上面的操作了
	printf("\a");//蜂鸣器
	printf("%c\n", '//');//输出反斜杠
	printf("我爱于雅轩\b\b\b\b某某\n");//退格
	printf("我爱于雅轩\f测试一下\n");//将光标移动到下一页开头
	printf("1234567\r98745\n");//光标回到本行开头
	printf("12345\t12345\n");//光标移动到tab位置
	printf("123456\v987654\n");//将光标当前位置移动到下一个垂直表对其点
	printf("%s\n", "\124");//该二进制对应的ASCII码 斜杠后为八进制数字
	printf("%s", "\x42");///该二进制对应的ASCII码 斜杠x后为十六进制数字
	return 0;
}