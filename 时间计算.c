#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int hour = 0;
	int minute = 0;
	int num = 0;
	char op = 0;
	printf("请输入当前时间(格式：12;20)：");
	scanf("%d:%d", &hour, &minute);
	if (hour > 24 || hour < 0 || minute>=60 || minute < 0)
	{
		printf("\n输入不合法\n");
		return 1;
	}
	printf("\n请输入要进行+/-运算：");
	scanf(" %c", &op);
	if (op == '+')
	{
		//printf("\n请输入要+的时间(单位分钟)：");
		scanf("%d", &num);
		minute += num;
		while (minute >= 60)
		{
			hour++;
			minute -= 60;
			if (hour >= 24)hour = 0;
		}
		printf("\n增加后的时间是:%02d:%02d\n", hour, minute);
	}
	else if (op == '-')
	{
		//printf("\n请输入要-的时间(单位分钟)：");
		scanf("%d", &num);
		minute -= num;
		while (minute < 0)
		{
			hour--;
			minute += 60;
			if (hour < 0)hour = 23;
		}
		printf("\n减少后的时间是:%02d:%02d\n", hour, minute);
	}
	else
		printf("\n输入不合法\n");
	return 0;
}