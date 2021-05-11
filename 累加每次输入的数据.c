#include<stdio.h>
int main(void)
{
    int a, sum=0;
    
    do
    {
        printf("Input num:");
        scanf("%d", &a);
        if (a != 0)
            sum += a;
        printf("sum = %d\n", sum);
    }while(a != 0);
    
}
/*
  用do while语句编程，输入一组整型数据，然后显示每次将输入数据进行累加运算后的结果。当输入0时，停止输入数据，结束程序的运行。
  **输入格式要求："%d" 提示信息："Input num:"
  **输出格式要求："sum = %d\n"
  程序运行示例如下：
  Input num:1
  sum = 1
  Input num:2
  sum = 3
  Input num:3
  sum = 6
  Input num:4
  sum = 10
  Input num:0
  sum = 10
*/
