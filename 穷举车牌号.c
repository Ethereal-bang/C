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

    printf("Lorry_No. is %d .\n", num);
}
/*
    穷举，抓交通肇事犯。一辆卡车违犯交通规则，撞人后逃跑。现场有三人目击事件，但都没记住车号，只记下车号的一些特征。甲说：牌照的前两位数字是相同的；乙说：牌照的后两位数字是相同的，但与前两位不同；丙是位数学家，他说：四位的车号刚好是一个整数的平方。请根据以上线索求出车号。
    **输出格式要求："Lorry_No. is %d .\n"
*/
