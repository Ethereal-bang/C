#include<stdio.h>
#define N 100
void MyStrcat(char desStr[], char srcStr[]);
int FindLength(char str[]);
int main()
{
    char dstStr[N], srcStr[N];
    printf("Input a string:");
    gets(dstStr);
    printf("Input another string:");
    gets(srcStr);
    MyStrcat(dstStr, srcStr);
    printf("Concatenate results:%s\n", dstStr);
}
// 函数功能：将字符串 srcStr 连接到 desStr 的后面
void MyStrcat(char dstStr[], char srcStr[])
{
    int i, j, dstStrLength;
    dstStrLength = FindLength(dstStr);
    for(i = dstStrLength, j = 0; srcStr[j] != '\0'; i++, j++)
    {
        dstStr[i] = srcStr[j];
    }
    dstStr[i] = '\0'; // 末尾加上字符串结束标志

}
// 函数功能：返回字符数组 str 的长度（不包括'\0'）
int FindLength(char str[])
{
    int i;
    for(i = 0; str[i] != '\0'; i++);
    return i;
}
