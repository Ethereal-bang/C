#include <stdio.h>
struct date
{
    int  y;
    int m;
    int d;
};
typedef struct stu
{
    char n[10];
    struct date b;
    int a;
}stu;

int main()
{
    stu s = {"Wang", {1980, 12, 11}, 30}; // 符号；结构体变量定义位置
    printf("%s,%d,%d\n", s.n, s.b.d, s.a);  // 引用变量名
}
/*
  以下程序有若干语法错误。请找出并改正之。
  输入：无
  输出：Wang,11,30
  #include <stdio.h>
  struct date
  {   
      int  y;m;d; 
  }
  struct stu
  {   char n[10];
      struct date b;
      int a;
  }s={“Wang”,{1980,12,11},30};  
  main()
  {   
      printf(“%c,%d,%d\n”,s.n,s.d,s.a);   
  }
*/
  
