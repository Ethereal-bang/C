#include<stdio.h>
void Judge(char a)
{
    if (a <= 'z' && a >= 'a')
        printf("It is an English character!\n");
    else if (a >= 48 && a <= 57)
        printf("It is a digit character!\n");
    else if (a == ' ')   // 或者用空格的 ASCII 码 32
        printf("It is a space character!\n");
    else
        printf("It is other character!\n");
}
int main(void)
{
    char a;
    printf("Press a key and then press Enter:");
    a = getchar();

    Judge(a);
}

/*
  从键盘任意输入一个字符，编程判断该字符是数字字符、英文字母、空格还是其他字符。
  **输入格式要求：提示信息："Press a key and then press Enter:"
                            用 getchar()输入
  **输出格式要求："It is an English character!\n" "It is a digit character!\n"  "It is a space character!\n"  "It is other character!\n"
  程序运行示例1如下：
  Press a key and then press Enter:A
  It is an English character!
  程序运行示例2如下：
  Press a key and then press Enter:2
  It is a digit character!
  程序运行示例3如下：
  Press a key and then press Enter: 
  It is a space character!
  程序运行示例4如下：
  Press a key and then press Enter:#
  It is other character!
*/
