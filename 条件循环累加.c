#include <stdio.h>
int main(void)
{
    int num, sum = 0, count = 0;

    do
    {
        printf("Input a number:");
        scanf("%d", &num);

        if (num > 0)
        {
            sum += num;
            count++;
        }
    }while (num != 0);

    printf("sum = %d, count = %d\n", sum, count);
}
/*
  输入一些整数，编程计算并输出其中所有正数的和，输入负数时不累加，继续输入下一个数。输入零时，表示输入数据结束。要求最后统计出累加的项数。
  输入提示信息："Input a number:"
  输入格式："%d"
  输出提示信息和格式："sum = %d, count = %d\n"
  程序运行示例1：
  Input a number:4
  Input a number:5
  Input a number:8
  Input a number:3
  Input a number:7
  Input a number:2
  Input a number:0
  sum = 29, count = 6
*/
