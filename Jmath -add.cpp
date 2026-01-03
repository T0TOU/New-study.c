#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"Jmath.h"
int main()
{
	int i = 0;
	int num = 0;
	int sum = 0;
	int a[5] = { 1,2,4,1,2 };
	for (i = 0; i <= 4; i++)
	{
		num = jmath(a[i]);
		printf("%d!=%d\n", a[i], num);
	}
	printf("\n");
	for (i = 0; i <= 4; i++)
	{
		sum += jmath(a[i]);
	}
	printf("sum=%d\n", sum);
}