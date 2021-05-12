#include<stdio.h>
int main(void)
{
    int i, j, k;
    
    for (i = 0; i <= 45; i++)
    {
        for (j = 0; j <= 45; j++)
        {
            k = 45 - i*3 - j*2;
            if (k*2 + i + j == 45)
                printf("men=%d,women=%d,child=%d\n", i, j, k*2);
        }
    }
}
