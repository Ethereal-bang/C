#include<stdio.h>
int main(void)
{
    int i, j, k, count = 0;

    for (i = 0; i <= 100; i++)
    {
        for (j = 0; j <= 100; j++)
        {
            k = 3 * (100 - 5*i -3*j);
            if (k + i + j == 100)
            {
                count ++;
                printf("%2d:cock=%2d hen=%2d chicken=%2d\n", count, i, j, k);
            }
        }
    }
}
/*
  穷举法，百钱百鸡问题。鸡翁一，值钱五；鸡母一，值钱三；鸡雏三，值钱一；百钱买百鸡，翁、母、雏各几何？
  **输出格式要求："%2d:cock=%2d hen=%2d chicken=%2d\n"
  程序运行示例如下：
   1:cock= 0 hen=2* chicken=75
   2:cock= 4 hen=** chicken=78
   3:cock= * hen=11 chicken=81
   4:cock=12 hen= 4 chicken=**
*/
