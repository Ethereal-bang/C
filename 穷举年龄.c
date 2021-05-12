#include<stdio.h>
int main(void)
{
    int year, mingAge = 12, motherAge = 24 + mingAge;
    int i = 0;

    do
    {
        mingAge++;
        motherAge++;
        i++;
    }while(motherAge != mingAge * 2);

    year = i;
    printf("year=%d\nmingAge=%d\nmotherAge=%d\n", year, mingAge, motherAge);

}
/*
  小明今年12岁，他母亲比他大24岁。编写一个程序计算小明的母亲在几年后比小明的年龄大一倍，那时他们两人的年龄各是多少？
  **输出格式要求："year=%d\n" "mingAge=%d\n" "motherAge=%d\n"
  程序运行示例如下：
  year=12
  mingAge=**
  motherAge=**
*/
