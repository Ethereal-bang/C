#include<stdio.h>
int main(void)
{
    int num;
    printf("Input a single numeral:");
    scanf("%d", &num);
    
    switch(num)
    {
        case 0:printf("Sunday");break;
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thursday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
        default:printf("%d\n", num);
    }
}

/*
  编写程序实现以下功能。从键盘输入一个整数，若输入数字0,则屏幕显示："Sunday"；若输入数字1，则屏幕显示："Monday"；若输入数字2，则屏幕显示："Tuesday"；若输入数字3，则屏幕显示："Wednesday"；若输入数字4，则屏幕显示："Thursday"；若输入数字5，这屏幕显示："Friday"；若输入数字6，则屏幕显示："Saturday"；若输入其它数字，则屏目原样输出该数字。
  ***输入提示信息："Input a single numeral:"
  ***输入数据格式："%d"
  ***输出数据格式：
     若输入数字0,则屏幕输出："Sunday\n";
     若输入数字1,则屏幕输出："Monday\n";
     若输入数字2,则屏幕输出："Tuesday\n";
     若输入数字3,则屏幕输出："Wednesday\n";
     若输入数字4;则屏幕输出："Thursday\n";
     若输入数字5,这屏幕输出："Friday\n";
     若输入数字6,则屏幕输出："Saturday\n";
     若输入其它数字，则屏幕输出："%d\n"
  程序运行示例：
  Input a single numeral:5
  Friday
  程序运行示例2：
  Input a single numeral:8
  8
*/  
