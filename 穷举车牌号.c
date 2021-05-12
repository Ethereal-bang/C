#include<stdio.h>
int main(void)
{
    int num, pre, back, minNum = 32;   // 由该 4 位数是整数的平方初步推测从 32 开始

    do
    {
        num = minNum * minNum;
        if (num / 1000 == num / 100 % 10 && (num / 10 % 10 == num % 10))  // 注意：如何取位数
        {
            pre = num / 1000;
            back = num % 1000;
            if (pre != back)
                break;
        }
        minNum++;
    }while(num < 10000);

    printf("The number is:%d\n", num);
}
