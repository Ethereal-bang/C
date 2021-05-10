#include<stdio.h>
#define N 10
int main(void)
{
    int num;
    char week[][N] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    printf("Please input a single numeral(1-7): ");
    scanf("%d", &num);
    
    if (num > 7 || num < 1)
        printf("Invalid - please input a single numeral(1-7).\n");
    else if (num == 1)
        printf("%s", week[6]);
    else
        printf("%s", week[num - 2]);
        
}

/*
  写一个程序从键盘输入1到7中的某个数字，其中1代表星期天，2代表星期一，3代表星期二等。根据用户输入的数字显示相应的星期几。如果用户输入的数字超出了1到7的范围，显示输出一个错误提示信息。
  **输入格式要求："%d" 提示信息："Please input a single numeral(1-7): "
  **输出格式要求："Monday\n"; "Tuesday\n"; "Wednesday\n"; "Thursday\n"; "Friday\n"; "Saturday\n"; "Sunday\n";（星期几的英文单词首字母大写加换行） 
  **错误提示信息："Invalid - please input a single numeral(1-7).\n"
  程序运行示例1：
  Please input a single numeral(1-7): 5
  Thursday
  程序运行示例2：
  Please input a single numeral(1-7):
  9
  Invalid - please input a single numeral(1-7).
*/
