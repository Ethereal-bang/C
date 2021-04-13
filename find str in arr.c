#include<stdio.h>
#include<string.h>
int main(void)
{
    char user[5];
    int i, find = 0;
    char list[][6] = {"abc", "bbc", "ccc", "Hello", "John", "Tome", "\0"};  // 为什么是 6 不能是 5，因为 \0 
    printf("请输入一行字符：");
    gets(user);
    for (i = 0; i < 6; i++)
    {
        if(strcmp(user, list[i]) == 0)
        {
            printf("欢迎你，%s！", user);
            find = 1;
            break;
        }
    }
    if(find == 0)
        printf("名字没有找到！");
}
