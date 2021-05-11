#include<stdio.h>
int main(void)
{
    int n, i, j;

    printf("Input n:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)    // 对每行操作
    {
        if (i == n) // 最后一排特殊单独考虑
        {
            for (j = 1; j <= 2*n-1; j++)
                printf("*");
            printf(" ");
        }
        else
        {
            for (j = 1; j <= n-i; j++)   // 每一行中前面部分的空格
                printf(" ");
            for (j = 1; j <= 2*i-1; j++)
                printf("*");
        }
        printf("\n");
    }

}
/*
  编程实现以下图形打印。要求要打印的图形行数（n）从键盘读入。
  ***输入提示信息**："Input n:\n"
  ***输入数据格式**："%d"
  ***输出数据格式**：
  若n=3，则要打印的图形为：
    *
   ***
  *****
  若n=5，则要打印的图形为：
      *
     ***
    *****
   *******
  *********
