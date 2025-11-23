#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"project3-judge.h"
int main()
{
	int x;
	int a[500];
	int len;
	for (x = 1; x <= 10000; x++)
	{
		if (judge(x,a,&len) == 1)
		{
			printf("%d是完全数\n%d的真因数是:", x,x);
			for (int i = 0; i < len; i++)
			{
				printf("%d ", a[i]);
			}
			printf("\n\n");
		}
	}
	return 0;
}