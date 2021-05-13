#include <stdio.h>
#include<math.h>
int main()
{
    double num, sum;
    int find = 1;

    for (num = 1.0; fabs(1.0 / num) >= 1e-4; num += 2)
    {
        if (find)
        {
            sum += 1.0 / num;
            find = 0;   // ?
        }
        else
        {
            sum -= 1 / num;
            find = 1;
        }
    }

    printf("pi=%10.6lf\n", sum * 4);
}
// 上面代码输出：pi=  3.141393

#include "math.h"
#include <stdio.h>
main()
{  	  	 		   
    int s;
    double n, t, pi;
    t = 1;
    pi = 0;
    n = 1;
    s = -1;
    do
    {  	  	 		   
        s = -s;
        t = s / n;
        pi += t;
        n += 2;
    }while ((fabs(t)) >= 1e-4);
    pi = pi * 4;
    printf("pi=%10.6lf\n", pi);
}  	  	 	
// 正确输出：pi=  3.141793

/*
  用下列公式求pi的近似值，直到最后一项的绝对值小于1e-4为止：
  π4=1−13+15−17+…
  **输入：无
  **输出格式要求："pi=%10.6lf\n"
*/
