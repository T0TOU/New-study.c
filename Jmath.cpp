#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int jmath(int x)
{
	int j = 0;
	int n = 1;
	for (j = 1; j <= x; j++)n *= j;
	return n;
}
int Jmath(int x)
{
	static int f = 1;
	f *= x;
	return f;
}