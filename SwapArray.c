#include <stdio.h>
void Swap(int *a, int *b);
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};
    int i;
    Swap(&a[0], &b[0]);
    for(i = 0; i < 5; i++)
    {
        printf("a[%d]=%2d, ", i, a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        printf("b[%d]=%2d, ", i, b[i]);
    }
    return 0;
}
// 函数功能：交换两数组元素
void Swap(int *a, int *b)
{
    int temp, i;
    for(i = 0; i < 5; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

