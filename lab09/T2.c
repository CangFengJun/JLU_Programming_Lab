#include <stdio.h>
#include <malloc.h>
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
        if (n == 0)
            break;
        if (n != 0)
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
struct cell *del2one(struct cell *head)
{ // 删除重复结点只保留一个，head是单链表首结点指针
    struct cell *tmp, *p, *q;
    for (tmp = head; tmp; tmp = tmp->next)
    {
        for (q = tmp, p = tmp->next; p;)
        {
            if (tmp->x == p->x)
            {
                q->next = p->next;
                free(p);
                p = q->next;
            }
            else
            {
                q = p;
                p = p->next;
            }
        }
    }
    return head; // 返回删除重复结点的单链表头
}
void print(struct cell *head)
{ // 打印整个单链表,head是单链表首结点指针
    struct cell *p;
    for (p = head; p; p = p->next)
    {
        if (p->next == NULL)
            printf("%d", p->x);
        else
            printf("%d ", p->x);
    }
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
    struct cell *head;
    head = build();
    head = del2one(head);
    if (head != NULL)
        print(head);
    else
        printf("NULL");
    release(head);
}