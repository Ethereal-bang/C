#include<stdio.h>
float F(double x)
{
    if (x < 0)
        return 0;
    else if (x <= 15)
        return 4 * x / 3;
    else
        return 2.5 * x - 10.5;
}
int main(void)
{
    double x;
    float y;

    printf("Enter x:");
    scanf("%lf", &x);

    y = F(x);
    x = (float)x;   // 强制类型转换

    printf("f(%.2f)=%.2f\n", x, y);
}

/*
  请编程计算居民应交水费，并提供各种测试数据。居民应交水费y（元）与月用水量x（吨）的函数关系式如下：
  y=f(x)=⎧⎩⎨0,4x3,2.5x−10.5,x<00≤x≤15x>15
  **输入格式要求：信息提示："Enter x:" 输入格式："%lf"
  **输出格式要求："f(%.2f)=%.2f\n"
  程序运行示例：
  Enter x:38.9
  f(38.90)=86.75
*/
