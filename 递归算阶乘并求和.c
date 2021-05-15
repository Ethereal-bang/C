#include<stdio.h>
int Fact(int n)
{
    if (n == 1 || n == 0) // 注意：边界条件
        return 1;
    else
        return n * Fact(n-1);
}
int main(void)
{
    int n, i;
    long sum = 0;

    printf("Input n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += Fact(i);
    }

    printf("1!+2!+…+%d! = %ld\n", n, sum);
}
/*
  编程从键盘输入n值（10≥n≥3），然后计算并输出1! + 2! + 3! + … + n!。
  **输入格式要求："%d" 提示信息："Input n:"
  **输出格式要求："1!+2!+…+%d! = %ld\n"
  程序运行示例如下：
  Input n:10
  1!+2!+…+10! = 4037913
*/
