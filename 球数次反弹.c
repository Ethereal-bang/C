#include <stdio.h>
int main(void)
{
    float h = 100, s = 0;
    int i = 1;

    do
    {
        // 下落过程
        s += h;
        h /= 2; // ?

        // 反弹过程
        s += h;

        i++;
    }while (i <= 10);
    s -= h; // 减去第十次反弹高度

    printf("the total of road is %f\nthe tenth is %f meter\n", s, h);
}
/*
  一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
  **输出格式要求："the total of road is %f\n" "the tenth is %f meter\n"
  程序运行示例如下：
  the total of road is 299.****75
  the tenth is 0.097656 meter
*/

  
