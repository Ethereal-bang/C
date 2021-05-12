#include<stdio.h>
int Add(n)
{
    int i = 1, sum = 0;

    do
    {
        sum += i;
        i++;
    }while(i <= n);

    return sum;
}
int main(void)
{
    int n;

    printf("Input n:");
    scanf("%d", &n);

    printf("sum = %d\n", Add(n));
}
/*
  编程从键盘输入n，然后计算并输出1+2+3+…+n的值。用do-while语句编程实现。
  **输入格式要求："%d" 提示信息："Input n:"
  **输出格式要求："sum = %d\n"
  程序运行示例如下：
  Input n:100
  sum = 5050
*/
  
