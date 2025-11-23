#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m,n, x, y,i;
	x = 0; y = 0;
	scanf("%d%d", &m, &n);
	for (i = 1; i <= m; i++)
	{
		if (m % i == 0)
		{
			if (n % i == 0)x = i;
		}
	}
	for (i = 1; i <= n * m; i++)
	{
		if ((i % m == 0) && (i % n == 0))
		{
			y = i;
			break;
		}
	}
	printf("最大公约数是:%d\n", x);
	printf("最小公倍数是:%d\n", y);
	return 0;
}