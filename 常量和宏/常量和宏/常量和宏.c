#define _CRT_SECURE_NO_WARNINGS
#define max 1000
#define add(x, y) x + y
#define ad(x, y) ((x) + (y))
#include<stdio.h>
int main()
{
	printf("%d ", max);
	printf("%d ", add(2, 2));
	printf("%d ", 2 * add(2, 2));
	printf("%d ", ad(2, 2));
	printf("%d ", 2 * ad(2, 2));
}
