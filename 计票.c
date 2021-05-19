#include <stdio.h>
#include<string.h>
typedef struct candidate
{
    char name[5];
    int votes;
}Candidate; // 候选人

int main(void)
{
    int i, num, j;
    Candidate can[3];
    char votedName[5];

    printf("输入3个候选人的基本信息：姓名\n");
    for (i = 0; i < 3; i++)
        scanf("%s", can[i].name);
    printf("输入参加投票的人数:");
    scanf("%d", &num);
    // 初始化票数
    for (i = 0; i < 3; i++)
        can[i].votes = 0;
    printf("输入%d个参加投票人的投票情况\n", num);
    // 储存每个投票人投票姓名
    for (i = 0; i < num; i++)
    {
        scanf("%s", votedName);
        for (j = 0; j < 3; j++)
        {
            // 计票
            if (strcmp(votedName, can[j].name) == 0)  
            {
                can[j].votes++; // 这里 can[j] 不是地址，不用 ->
                break;
            }

        }
    }

    printf("输出3个候选人的基本信息：姓名，票数\n");
    for (i = 0; i < 3; i++)
        printf("%s %d\n", can[i].name, can[i].votes);
}
/*
  编写人得票统计程序。设有3个候选人，每次输入一个得票候选人的名字，不考虑弃权情况，要求最后输出各个候选人的得票结果（参加投票人数由程序运行时输入）。

  输入提示："输入%d个候选人的基本信息：姓名\n"
  输入格式："%s"
  输入提示："输入参加投票的人数:"
  输入格式："%d"
  输入提示："输入%d个参加投票人的投票情况\n"
  输入格式："%s"
  输出提示："输出%d个候选人的基本信息：姓名，票数\n"
  输出格式："%s %d\n"

  程序的运行示例如下：
  输入3个候选人的基本信息：姓名
  a
  b
  c
  输入参加投票的人数:5
  输入5个参加投票人的投票情况
  a
  a
  b
  b
  c
  输出3个候选人的基本信息：姓名，票数
  a 2
  b 2
  c 1
*/
