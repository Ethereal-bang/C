#include<stdio.h>
void InputNum(int count, int n, int q);
void Sort(int arr[], int n);
int FindNum(int arr[], int num, int n);
int main(void)
{
    int count = 0;
    int n, q;
    while(1)
    {
        scanf("%d %d", &n, &q);
        if(n == 0 && q == 0)
            break;
        count ++;
        InputNum(count, n, q);
    }
}
void InputNum(int count, int n, int q)
{
    int i, j, res;
    int arr[n], qArr[q];
    /* 输入数字 */
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* 排序 */
    Sort(arr, n);

    /* 询问存入 qArr */
    for (i = 0; i < q; i++)
    {
        scanf("%d", &qArr[i]);
    }

    /* 打印询问结果 */
    printf("CASE# %d\n", count);
    for (i = 0; i < count; i++) // 循环每一个测试数据
    {
        for (j = 0; j < q; j++) // 循环每一个询问结果
        {
            res = FindNum(arr, qArr[j], n);
            if(res == -1)
                printf("%d not found\n", qArr[j]);
            else
                printf("%d fount at %d\n", qArr[j], res);
        }
    }
}
void Sort(int arr[], int n)
{
    int i, j, k, temp;
    for (i = 0; i < n-1; i++)
    {
        k = i;
        for (j = i+1; j < n; j++)
        {
            if(arr[j] < arr[k])
            {
                k = j;
            }
        }
        if (k != i)
        {
            temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
        }
    }
}
int FindNum(int arr[], int num, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if(arr[i] == num)
            return i;
    }
    return -1;
}
