#include<stdio.h>
#include<string.h>
#define N 10
int main(void)
{
    char *country[N] = {"Australia","Belgium","China","Denmark","England","France","Greece","Ireland","Scotland","Wales"};
    char *captain[N] = {"Canberra","Brussels","Beijing","Copenhagen","London","Paris","Athens","Dublin","Edinburgh","Cardiff"};
    char str[15];
    int i;
    
    printf("请输入国家名：");
    gets(str);
    /* 查找国家名 */
    for (i = 0; i < N; i++)
    {
        if (strcmp(country[i], str) == 0)
            break;
    }
    /* 取出对应首都 */
    if (i == N)
        printf("你输入的国家%s没有找到它的首都！", str);
    else
        printf("%s的首都为%s！", str, captain[i]);
}

/*
    注意点：
    1. 指针数组初始化：指向多个字符串时也只是个一维数组
    2. 指针数组下标引用：本就是地址，不需加取值符号`*`
*/

/*
    下表是国家和它们的首都：	
Australia Canberra
Belgium	Brussels
China	Beijing
Denmark	Copenhagen
England	London
France	Paris
Greece	Athens
Ireland	Dublin
Scotland Edinburgh
Wales	Cardiff
写一个程序输入一个国家的国家名，输出该国的首都名。

**提示信息："请输入国家名："
**输出格式要求："%s的首都为%s！"  "你输入的国家%s没有找到它的首都！"

程序运行示例：
请输入国家名：France
France的首都为Paris！
*/
