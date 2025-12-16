#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>  
void color(const unsigned short textColor)      //自定义函根据参数改变颜色 
{
    if (textColor >= 0 && textColor <= 15)     //参数在0-15的范围颜色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), textColor);  //用一个参数，改变字体颜色
    else   //默认的字体颜色是白色
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main()
{
    int hour = 0;
    int minute = 0;
    int num = 90;
    char op=0;
    printf("请输入当前时间(格式:12:20):");
    scanf("%d:%d", &hour, &minute);
    if (hour > 24 || hour < 0 || minute >= 60 || minute < 0)
    {
        printf("\n输入不合法\n");
        return 1;
    }
    printf("\n请输入需要进行的运算+/-:");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            for (int i = 1; i <= 16; i++)
            {
                int m, h;
                m = minute; h = hour;
                num = 90;
                num *= i;
                m += num;
                while (m >= 60)
                {
                    h++;
                    m -= 60;
                    if (h == 24)h = 0;
                }
                color(7);
                if (i == 5)color(2);
                printf("%4.1f小时后:%02d:%02d\n", i * 1.5, h, m);
            }
            break;
        case'-':
            for (int i = 1; i <= 16; i++)
            {
                int m, h;
                m = minute; h = hour;
                num = 90;
                num *= i;
                m -= num;
                while (m < 0)
                {
                    h--;
                    m += 60;
                    if (h < 0)h = 23;
                }
                color(7);
                if (i == 5)color(2);
                printf("%4.1f小时前:%02d:%02d\n", i * 1.5, h, m);
            }
            break;
        default:
            printf("\n输入无效\n");
            break;
    }
    return 0;
}
