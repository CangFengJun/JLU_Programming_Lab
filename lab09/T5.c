#include <malloc.h>
#include <stdio.h>
struct cell
{ // 单链表结点结构体定义
    int x;
    struct cell *next;
};
struct cell *build(void)
{ // 新建单链表，并将建好的单链表首结点地址返回
    struct cell *head, *tmp, *p;
    head = tmp = p = NULL;
    int n;
    while (scanf("%d", &n))
    {
        if (n == 0) break;
        else
        {
            tmp = (struct cell *)malloc(sizeof(struct cell));
            tmp->x = n;
            tmp->next = NULL;
            if (head == NULL)
            {
                head = tmp;
                p = tmp;
            }
            else
            {
                p->next = tmp;
                p = tmp;
            }
        }
    }
    return head; // 返回单链表头
}
struct cell *back(struct cell *head, int k)
{ // 求链表倒数第k个结点，head是单链表首结点指针
    struct cell *fast, *slow;
    fast = slow = head;
    for (int i = 1; i <= k; i++)
    {
        if (fast == NULL)
        {
            return NULL; // 链表长度小于k
        }
        fast = fast->next;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
void release(struct cell *head)
{ // 释放单链表空间,head是单链表首结点指针
    struct cell *p, *q;
    for (p = head; p; p = q)
    {
        q = p->next;
        free(p);
    }
}
int main(void)
{
    struct cell *head, *result;
    int k;
    head = build();
    scanf("%d", &k);
    result = back(head, k);
    if (result != NULL)
        printf("%d", result->x);
    else
        printf("NULL");
    release(head);
}