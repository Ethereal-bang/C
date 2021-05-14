#include <stdio.h>
#include<math.h>
int main()
{
    int count = 0, num = 1, sum = 0;
    
    do
    {
        sum += pow(num, 3);
        count++;
        num++;
    }while (sum < 1000000);
    
    printf("count = %d\n", count);
}
/*
  编程计算大于0 的数的立方和，直到立方和大于等于1000000时为止。统计并输出实际累加的项数。
   ***输入提示信息***：无
   ***输入数据格式***：无
   ***输出数据格式***："count = %d\n"
*/
