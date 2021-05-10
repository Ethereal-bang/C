#include<Stdio.h>
int JudgeYear(int year) // 函数功能：判断年份是否闰年，是返回 1；否返回 -1
{
    if (year%4 == 0 && year%100 != 0 || year%400 == 0)
        return 1;
    else
        return -1;
}
int main(void)
{
    int year;

    printf("Input year:\n");
    scanf("%d", &year);

    switch(JudgeYear(year))
    {
        case 1:printf("Yes");break;
        case -1:printf("No");break;
    }

}
/*
  从键盘任意输入一个年号，判断它是否是闰年。若是闰年，则输出"Yes"，否则输出"No"。已知符合下列条件之一者是闰年：1）能被4整除，但不能被100整除；或  2）能被400整除。
  **提示信息格式**: "Input year:\n"
  **输入数据格式**: "%d"
  **输出数据格式**: 
            如果是闰年输出: "Yes"
            否  则  输  出: "No"
  程序运行示例1：
  Input year:
  2020
  Yes
  程序运行示例2：
  Input year:
  1999
  No
*/
