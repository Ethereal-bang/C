#include<stdio.h>
#include<math.h>
int main(void)
{
    int i, j, k, num;
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                num = 100*i + 10*j + k;
                if (num == pow(i, 3) + pow(j, 3) + pow(k, 3))
                    printf("%d\n", num);
            }
        }
    }
}
/*
  编写一个程序，打印所有的“水仙花数”。
  所谓“水仙花数”，是指一个三位数，
  其各位数字的立方和等于该数本身。
  例如，153是“水仙花数”，因为153=1^3+3^3+5^3。
  **要求输入提示信息为：无输入提示信息和输入数据
  **要求输出格式为："%d\n"
*/
