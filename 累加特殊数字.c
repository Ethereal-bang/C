#include<stdio.h>
int main(void)
{
    int i, num, sum = 0;
    
    for (i = 7; i < 101; i += 7)
    {
        sum += i;
    }
    
    printf("sum=%d\n", sum);
}
/*
  计算1~100之间的所有7的倍数之和。
  **输出格式要求："sum=%d\n"
*/
