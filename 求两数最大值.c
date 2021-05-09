#include<stdio.h>
int FindMax(int a, int b);
int main(void)
{
    int a, b;
    
    printf("input the value of x and y:");
    scanf("%d %d", &a, &b);
    
    printf("The max of %d and %d  is %d\n", a, b, FindMax(a, b));
}

int FindMax(int a, int b)
{
    int max;
    if (a > b)
        return a;
    else
        return b;
}

/*
  编程求两个整数中的最大值。
  **输入格式要求："%d %d" 提示信息："input the value of x and y:"
  **输出格式要求："The max of %d and %d  is %d\n"
  程序示例运行如下：
  input the value of x and y:3 4
  The max of 3 and 4 is 4
*/
