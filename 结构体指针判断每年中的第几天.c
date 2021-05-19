#include <stdio.h>
typedef struct date
{
    int year;
    int month;
    int day;
}Date;
int CountDays(Date *time);
int JudgeYear(Date *time);
int main(void) {
    Date time;

    printf("请输入日期（年，月，日）\n");
    scanf("%d,%d,%d", &time.year, &time.month, &time.day);

    printf("\n%d月%d日是%d年的第%d天。", time.month, time.day, time.year, CountDays(&time));

}
int CountDays(Date *time) // 函数功能：返回该结构体日期是该年第几天
{
    int dayInMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};    // 平年 28 天
    int daysSum = 0, i;

    for (i = 0; i < time->month-1; i++)
            daysSum += dayInMonths[i];
    daysSum += time->day;
    if (JudgeYear(time) == 1 && time->month > 1 && time->day > 28)  // 虽然 JudgeYear 接收指针，但这里 time 本身就是地址所以不用加 &
        daysSum++;  // 在满足闰年，大于 2 月 28 日的情况下多加一天

    return daysSum;
}
int JudgeYear(Date *time) // 函数功能：判断年份是否闰年，是返回 1；否返回 -1
{
    if ((time->year%4 == 0 && time->year%100 != 0)|| time->year%400 == 0)
        return 1;
    else
        return -1;
}
/*
  写一个函数days，实现主函数将年、月、日（结构体类型）传递给days函数，days函数计算该年该月该日是该年的第几天并传回主函数输出。
  输入提示："请输入日期（年，月，日）\n"
  输入格式："%d,%d,%d"
  输出格式："\n%d月%d日是%d年的第%d天。"

  程序的运行示例如下：

  请输入日期（年，月，日）
  1990,2,14

  2月14日是1990年的第45天。
*/
