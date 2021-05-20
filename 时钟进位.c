#include<stdio.h>
struct time_rec
{
  int hours;
  int mins;
  int secs;
};
void input_time(struct time_rec *current_time)  // 输入current_time的值
{
    printf("请输入当前时间（时 分 秒）：");
    scanf("%d %d %d", &current_time->hours, &current_time->mins, &current_time->secs);
}
void increment_time(struct time_rec *current_time)  // 将current_time增加1秒
{
    if (current_time->secs == 59) // 要注意进位
    {
        current_time->secs = 0;
        if (current_time->mins == 59)
        {
            current_time->mins = 0;
            if (current_time->hours == 23)   
            {
                current_time->hours = 0;
            }
            else
                current_time->hours++;
        }
        else
            current_time->hours++;
    }
    else
        current_time->secs++;
}
void output_time(struct time_rec *current_time) // 输出current_time的值
{
    printf("当前时间：%d时%d分%d秒！", current_time->hours, current_time->mins, current_time->secs);
}
int main()
{
    struct time_rec time;

    input_time(&time);
    increment_time(&time);
    output_time(&time);
}
