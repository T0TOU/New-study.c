#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include "jc.h"
int main(void)
{	
	float x1, x2,a, b, c,dt;
	int d, e, f;
	printf("请输入三个数：");
	scanf("%f%f%f", &a, &b, &c);
	dt = pow(b, 2) - 4 * a * c;
	if (dt > 0)
	{
		printf("方程有两个不等实根\n");
		x1 = (- b + sqrt(dt))  / (2 * a);
		x2 = (- b - sqrt(dt))  / (2 * a);
		printf("x1=%.2f,x2=%.2f\n", x1, x2);
	}
		else if (dt == 0)
		{
			printf("方程有两个相等实根\n");
			x1 = x2 = (- b + sqrt(dt))  / (2 * a); 
			printf("x1=x2=%.2f\n", x1);
		}
		else
		printf("方程无实根\n");
	int i = 100;
	int sum = 0, sum2 = 0;
	while(i<=999)
	{ 
		d = i / 100;
		e = (i - d* 100) / 10;
		f = i - d * 100 - e * 10;
		if (pow(d, 3) + pow(e, 3) + pow(f, 3) == i)printf("%d\n", i);
		i++;
	}
	for (i = 1; i <= 10; i++)
	{
		printf("%d的阶乘是%d\n", i, jc(i));
		sum += jc(i);
	}
	printf("1到10的阶乘和是%d\n", sum);
	sum = 0;
	int al[3][3]{ 1,2,3,4,5,6,7,8,9 };
	for (i = 0; i < 3; i++)
	{
		sum += al[i][i];
		sum2 += al[i][2 - i];
	}
	printf("矩阵主对角线之和为%d\n", sum);
	printf("矩阵辅对角线之和为%d\n", sum2);
	return 0;
}