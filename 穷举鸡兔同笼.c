#include<stdio.h>
int main(void)
{
    int chik, rabbit, i, j;
    
    for (i = 1; i <= 98; i++)
    {
        j = 98 - i;
        if (i * 2 + j * 4 == 386)
            printf("x=%d,y=%d\n", i, j);
    }
}
/*
  鸡兔同笼，共有98个头，386只脚，请用穷举法编程计算鸡、兔各多少只。
  **输入提示信息格式要求：无输入数据
  **输出格式要求："x=%d,y=%d\n"
*/
