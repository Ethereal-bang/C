#include<stdio.h>
int FindFirst(int num)
{
    int i = 0, temp;
    
    while (num / 10 != 0)
    {
        temp = num / 10;
        if (temp == 0)
            return num;
        num = temp;
    }
    return num; // 个位 
}
int main(void)
{
    int n;
    
    printf("请输入一个整数：");
    scanf("%d", &n);
    
    printf("该整数以%d打头！\n", FindFirst(n));
}
/*
  编写一个函数，输出一个整数的打头数字。例如123的打头数字为1，-123的打头数字为-1。
  然后再主函数中调用这个函数。
  **输入格式要求："%d" 提示信息："请输入一个整数："
  **输出格式要求："该整数以%d打头！\n"

  程序运行示例：
  请输入一个整数：345
  该整数以3打头！
*/
