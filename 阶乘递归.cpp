#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "jc.h"
int jc(int x)
{
	if (x == 1)return 1;
	else
		return x * jc(x - 1);
}
