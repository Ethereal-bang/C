#include<Stdio.h>
void SwapNum(int *pa, int *pb);
int main(void)
{
    int a, b;
    printf("Please enter a,b:");
    scanf("%d,%d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    SwapNum(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
}
void SwapNum(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
