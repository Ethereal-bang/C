#include<stdio.h>
#define N 100
int FindLength(char *str);
int main(void)
{
    char str[N];
    int length;
    printf("Enter string:");
    scanf("%s", &str);
    length = FindLength(&str[0]);
    printf("string length=%d\n", length);
}
// 函数功能：求字符串的长度
int FindLength(char *str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++); // for语句后直接加入 ; 建立空循环
    return i;
}
