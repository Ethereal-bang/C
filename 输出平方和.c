#include<stdio.H>
#include<math.h>
int main(void)
{
    int i, n, sum = 0;

    printf("Please enter n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d*%d = %d\n", i, i, i*i);
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d*%d*%i = %d\n", i, i, i, i*i*i);
    }
}
/*
  编程计算并输出1到n之间的所有数的平方与立方。其中，n值由用户从键盘输入。
  **输入格式要求："%d" 提示信息："Please enter n:"
  **输出格式要求："%d*%d = %d\n"  "%d*%d*%d = %d\n" 

  程序运行示例如下：
  Please enter n:5
  1*1 = 1
  2*2 = 4
  3*3 = 9
  4*4 = 16
  5*5 = 25
  1*1*1 = 1
  2*2*2 = 8
  3*3*3 = 27
  4*4*4 = 64
  5*5*5 = 125
*/
