#include <stdio.h>
typedef struct date
{
    int year;
    int month;
    int day;
}Date;
int JudgeYear(Date time) // 函数功能：判断年份是否闰年，是返回 1；否返回 -1
{
    if (time.year%4 == 0 && time.year%100 != 0 || time.year%400 == 0)
        return 1;
    else
        return -1;
}
int main(void) {
    Date time;
    int dayInMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};    // 平年 28 天
    int daysSum = 0, i;

    printf("请输入日期（年，月，日）\n");
    scanf("%d,%d,%d", &time.year, &time.month, &time.day);

    for (i = 0; i < time.month-1; i++)
            daysSum += dayInMonths[i];
    daysSum += time.day;
    if (JudgeYear(time) == 1 && time.month > 1)
        daysSum++;  // 闰年 2 月多一天

    printf("\n%d月%d日是%d年的第%d天。", time.month, time.day, time.year, daysSum);
}
/*
  定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天？注意闰年问题。
  输出格式要求："\n%d月%d日是%d年的第%d天。"
  程序的运行示例如下：
  请输入日期（年，月，日）
  1990,2,14

  2月14日是1990年的第45天。
*/
