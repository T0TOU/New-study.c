#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int judge(int x,int a[],int *n )
{
	int y = 0;
	*n = 0;
	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			a[*n] = i;
			y += i;
			(*n)++;
		}
	}
	return x == y;
}