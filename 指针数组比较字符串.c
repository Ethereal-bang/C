#include <string.h>
#include <stdio.h>
int main()
{
    int i=0, findFlag = 1;
    char x[10]; // 注意：用数组储存字符串
    char *str[]={ "Pascal","Basic","Fortran", "Java","Visual C", "Visual Basic" };

    printf("Input string:\n");
    gets(x);

    while (i<6 && findFlag) // 注意：条件
    {
        if (strcmp(x, str[i]) == 0) // 注意：str[i] 才是字符串
        {
            findFlag = 0;
        }
        i++;
    }
    if (!findFlag)
    {
        printf("%s\n",x);
    }
    else
    {
         printf("Not find!\n");
    }
}
/*
  从键盘任意输入一个字符串（字符串可以有空格），
  在给定的一组字符串中寻找该输入字符串，
  若找到，则打印该字符串，否则打印"Not find!"。 
  注意：
  （1）请将修改正确后的完整源程序拷贝粘贴到答题区内。
  （2）对于没有错误的语句，请不要修改，
       修改原本正确的语句也要扣分。
  （3）当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
  #include <string.h>
  #include <stdio.h>
  main()
  {
      int i, findFlag = 1;  
      char x;              
      char *str[]={ "Pascal","Basic","Fortran", "Java","Visual C", "Visual Basic" };

      printf("Input string:\n");
      gets(x);

      while (i<6 && !findFlag)
      {   
          if (x=str[i])
          {
              findFlag = 0;    
          } 
          i++;
      }
      if (!findFlag)
      {      
          printf("%s\n",x);
      }
      else
      {      
           printf("Not find!\n");
      }
  }
*/
