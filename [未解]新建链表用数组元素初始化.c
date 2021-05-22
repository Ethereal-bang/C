/* 进度
#include<stdio.h>
#define N 6
struct node
{
    int data;
    struct node *next;
};
struct node *CreateNode(int num)   // 函数功能：新建一个节点并赋值 num
{
    struct node *p = (struct node *)malloc(sizeof(struct node));    // 动态申请一个节点的内存并将地址指向 p
    
    // 为新建节点赋值
    p->data = num; // 数据域
    p->next = NULL; // 指针域赋值为空指针
    
    // 返回新节点指针
    return p;
};
struct node *createList()
{
    
}   ;
int main(void)
{
    int arr = [1, 3, 5, 7, 9, 11];
    
}
void link *AppendNode(struct link *head, int arr[])    // 数组，尾插法创建单链表
{
    struct
}
*/

/* 参考答案
#include <stdio.h>
#include <stdlib.h>
 
#define N 6
 
struct LNode
{  	 	    			 
    int data;
    struct LNode *next;
}  	 	    			 ;
 
struct LNode* create_rear(int a[], int n);
void output(struct LNode *h);
 
int main(int argc, char *argv[])
{  	 	    			 
    /*①定义一个数组、头指针*/
    int a[N], i;
    struct LNode* head;
 
    /*②输入数组元素的值*/
    printf("输入数组%d个元素的值。\n", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
 
    /*③创建链表head,其结点的值依次为数组a元素的值*/
    head = create_rear(a, N);
    /*④输出链表head*/
    printf("此链表各个结点的数据域为：");
    output(head);
 
    return 0;
}  	 	    			 
 
struct LNode* create_rear(int a[], int n)
{  	 	    			 
    /*新建一个链表h，每个结点依次插入到链尾，将链表的头指针返回 */
    struct LNode *h = NULL;
    struct LNode *s, *r; /*用s指向要插入结点，r指向链表的尾结点*/
    int i;
 
    for (i = 0; i < n; i++)
    {  	 	    			 
        s = (struct LNode *)malloc(sizeof(struct LNode));
        s->data = a[i];
        s->next = NULL;
        if (h == NULL)
            h = s;       /*如果链表为空，则头指针h指向s */
        else
            r->next = s; /*否则将s链接到尾结点r之后     */
        r = s;           /*将r指向尾结点               */
    }
    return h;  /*返回链表的头指针*/
}  	 	    			 
 
void output(struct LNode *h)
{  	 	    			 
    /*将链表h的各个结点的数据域依次输出，即遍历该链表*/
    struct LNode *p = h;/*从第一个结点开始，用p依次指向各个结点*/
    while (p)
    {  	 	    			 
        /*只要p是一个非空结点，则输出其数据域，然后将p后移*/
        printf("%d ", p->data);
        p = p->next;  //将p后移
    }
}  	 
*/
  
/*
  建立一个链表，使链表中从头到尾的结点数据域依次是一个数组的各个元素的值。程序先建立链表然后再遍历输出（假定链表和数组均有6个整型元素）。

  **输入提示："输入数组%d个元素的值。\n"
  **输入格式："%d"
  **输出提示："此链表各个结点的数据域为："
  **输出格式："%d "

  程序运行示例如下：
  输入数组6个元素的值。↙
  1 3 5 7 9 11↙
  此链表各个结点的数据域为：1 3 5 7 9 11
*/
