#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int a = 0;
	int b = 0;
	int sum = 0;
	int c = 0;
	c = ~c;
	int y = 0;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	sum = a - b;
	printf("sum = %d\n", sum);
	sum = a * b;
	printf("sum = %d\n", sum);
	sum = a / b;
	printf("sum = %d\n", sum);
	sum = a % b;
	printf("sum = %d\n", sum);
	float z = 9 / 2;
	printf("%f\n", z);
	float z1 = 9 / 2.0;
	printf("%f\n", z1);
	float z2 = 9.0/ 2;
	printf("%f\n", z2);
	int z3 = 9 / 2;
	printf("%d\n", z3);
	int z4 = 9 / 2.0;
	printf("%d\n", z4);
	int z5 = 9.0 / 2;
	printf("%d\n", z5);
	int x = 157;
	x = x << 1;
	printf("%d\n", x);
	x = x >> 1 >> 1;
	printf("%d\n", x);
	//与&或|异或^
	a += 5;
	printf("%d\n", a);
	a -= 5;
	printf("%d\n", a);
	a *= 5;
	printf("%d\n", a);
	a /= 5;
	printf("%d\n", a);
	a <<= 5;
	printf("%d\n", a);
	a >>= 5;
	printf("%d\n", a);
	//取反！  正值+   负值-   取地址&   操作数的类型长度sizeof   ~对一个数的二进制位取反   ——   ++  简介访问操作符（解引用操作符）   强制类型转换（类型）
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr)/sizeof(int));
	printf("%d\n", c);//~按位取反
	//++ --
	//== <= >= != > <
	//   &&且   ||或者
	float f = (int)3.14;
	printf("%f\n", f);
	int n = 0;
	int m = 0;
	int j = 0;
	int l = 0;
	int max = 0;
	int MAX = 0;
	scanf("%d%d%d%d", &n, &m, &j, &l);
	if (n > m)
		max = n;
	else
		max = m;
	printf("max = %d", max);
	MAX = j > l ? j: l;//条件操作符
	printf("MAX = %d\n", MAX);
	int q = 5;
	int w = 2;
	int e = 8;
	int r = 0;
	r = (e = q + w, w = e * q, q = w - e);
	printf("%d", r);
	// 下边引用符【】  函数引用符（）  
	return 0;
}