#include<stdio.h>
int Mid(int a, int b, int c)
{
    return a > b ? (b > c ? b : ( a > c ? c : a)) : ( a > c ? a: (b > c ? c : b));
}
int main(void)
{
    int a, b, c;
    
    printf("请输入三个不同的整数：");
    scanf("%d%d%d", &a, &b, &c);
    
    printf("中间的一个数为%d\n",Mid(a, b, c));
}
/*
  写一个函数返回三个整数中的中间数。函数原型：int mid(int a, int b, int c)，返回a，b，c三数中大小位于中间的一个数。在main函数中调用该函数进行测试。

  **输入格式要求："%d%d%d" 提示信息："请输入三个不同的整数："
  **输出格式要求："中间的一个数为%d\n"
  程序运行示例：
  请输入三个不同的整数：9 6 3
  中间的一个数为6
*/
