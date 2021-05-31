// 进度
# include<stdio.h>

char call(void);

int main(){
	printf("第一次调用返回字符%c!\n", call());
	printf("第二次调用返回字符%c!\n", call());
	printf("第三次调用返回字符%c!\n", call());
	
	return 0; 
} 

char call()
{
    static char ch = 64; // A是65
    return ++ch;
}

/* 答案
# include<stdio.h>

char call(void);

int main(){
	printf("第一次调用返回字符%c!\n", call());
	printf("第二次调用返回字符%c!\n", call());
	printf("第三次调用返回字符%c!\n", call());
	
	return 0; 
} 

char call()
{
    static char ch = 64; // A是65
    return ++ch;
*/
/*
  写一个函数，如果它首次被调用，则返回字母A，第二次被调用，则返回字母B，第三次调用，则返回字母C，以此类推。（提示：使用一个static数据类型）
  函数原型为：char call_times(void)。
  编写main函数测试它。

  **输出格式要求："第一次调用返回字符%c!\n" "第二次调用返回字符%c!\n" "第三次调用返回字符%c!\n"

  程序运行示例：
  第一次调用返回字符A!↙
  第二次调用返回字符B!↙
  第三次调用返回字符C!↙
*/
