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
