#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	constexpr auto num = 5;
	int a[num][num] = { {17,24,1,8,15},{23,5,7,14,16},{4,6,13,20,22},{10,12,19,21,3},{11,18,25,2,9}};
	int sum1[2 * num + 2] = { 0 };
	int i = 0;
	int j = 0;
	int n = 0;
	int sum = 0;
	for (i = 0; i < num; i++)
	{
		sum = 0;
		for (j = 0; j < num; j++)
		{
			sum += a[i][j];
		}
		sum1[n] = sum;
		n++;
		sum = 0;
		for (j = 0; j < num; j++)
		{
			sum += a[j][i];
		}
		sum1[n] = sum;
		n++;
	}
	sum = 0;
	for (i = 0; i < num; i++)
	{
		sum += a[i][num - 1 - i];
	}
	sum1[n] = sum;
	n++;
	sum = 0;
	for (i = 0; i < num; i++)
	{
		sum += a[i][i];
	}
	sum1[n] = sum;
	for (i = 0; i < 2 * num + 2; i++)
	{
		printf("%d ", sum1[i]);
		if (sum1[i] != sum1[0])
		{
			printf("\nNO\n");
			return 0;
		}
	}
	printf("\nYes\n");
	return 0;
}