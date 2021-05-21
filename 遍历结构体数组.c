#include<stdio.h>   // 加头文件
struct s
{
    char name[10];
    int age;
};  // 加 ;
int main()
{
    struct s a[3] = {"John",19,"Paul",17,"Marry",18};   // 英文 "
    struct s *p = a;  // 初始化

    for(p = a; p < a+3; p++)  // 用地址遍历
    {
        printf("%s,%d\n", p->name, p->age );
    }
}
/*
  程序改错。以下程序用于打印输出结构体数组的所有元素。
  struct s
  {
      char name[10];
      int age;
  }
  main()
  {
      struct s a[3] = {”John”,19,”Paul”,17,”Marry”,18};
      int *p; 

      for(p = a; p < 3; p++)
      {
          printf("%s,%d\n", p->name, p->age );
      }
      
  }
*/
