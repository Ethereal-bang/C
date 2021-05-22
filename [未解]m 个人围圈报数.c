/* 参考答案
  #include<stdio.h>
  #include<stdlib.h>
  #define max 100
  int loop[max+10];
  int main(){		 		 		 	  
      int n,m,i;
      scanf("%d%d",&n,&m);
      for(i=0;i<n;i++)
      loop[i]=i+1;
      int dest=0;
      for(i=0;i<n;i++){		 		 		 	  
          int count=0;
          while(count<m){		 		 		 	  
              while(loop[dest]==0)
              dest=(dest+1)%n;
              count++;
              dest=(dest+1)%n;
          }
          dest--;
          if(dest<0)
          dest=n-1;
          if(i==n-1)
          printf("%d\n",loop[dest]);
          loop[dest]=0;
      }
      return 0;
  }
*/

/*
  n个人围成一圈，顺序编号。从第一个人开始从1到m报数，凡报到m的人退出圈子，编程求解最后留下的人的初始编号。
  程序运行示例：
  6 3（两个输入数据之间有空格）
  1

  输入格式：scanf("%d%d",&n,&m);
*/
