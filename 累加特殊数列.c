#include <stdio.h>
int Multiply(int num);
int main(void)
{
    int sum = 0, i;

    for (i = 1; i <= 99; i += 2)
    {
        sum += Multiply(i);
    }

    printf("sum=%d", sum);
}
int Multiply(int num)   // 返回每一项
{
    int sum = 0;

    sum += num * (num + 1) * (num + 2);

    return sum;
}
/*
  编程计算1*2*3 + 3*4*5 + ... + 99*100*101的值

  输入要求：无输入
  输出要求："sum=%d"
*/
