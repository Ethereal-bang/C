#include <stdio.h>

main()
{
    int i, s1 = 2, s2 = 1;
    float x, sum = 0;

    for (i = 1; i <= 20; i++)
    {
        sum += 1.0 * s1 / s2; // 注意：此处的 1.0 的作用
        x = s1;
        s1 += s2;
        s2 = x;
    }
    printf("sum = %9.6f\n", sum);
}
/*
  求2/1,3/2,5/3,8/5,13/8,21/13,.....前20项之和。请改正程序中的错误，使它能得出正确的结果。
  #include <stdio.h>

  main()
  {
      int i, s1 = 2, s2 = 1;
      float x, sum = 0;

      for (i = 1; i <= 20; i++)
      {
          sum += s1 / s2;
          x = s1;
          s1 += s2;
          s2 = x;
      }
      printf("sum = %9.6f\n", sum);
  }
*/
