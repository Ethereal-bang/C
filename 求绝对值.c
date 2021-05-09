#include<Stdio.h>
int Absolute(int a)
{
    if (a > 0)
        return a;
    else
        return -a;
}
int main(void)
{
    int a;
    
    printf("input the value of x:");
    scanf("%d", &a);
    
    printf("|x|=%d\n", Absolute(a));
}

/*
  编程求输入的整数的绝对值。
  **输入格式要求："%d" 提示信息："input the value of x:"
  **输出格式要求："|x|=%d\n"
  程序运行示例如下：
  input the value of x:68
  |x|=68
*/
