#include <stdio.h>
#include <malloc.h>
struct cell
{ // 单链表结点结构体定义
    int x;
    struct cell *next;
};
struct cell *build(void)
{ // 新建单链表，并将建好的单链表首结点地址返回
    struct cell *head, *tmp, *tail;
    head = tmp = tail = NULL;
    int n;
    while (scanf("%d", &n))
    {
        if (n == 0)
            break;
        else
        {
            tmp = (struct cell *)malloc(sizeof(struct cell));
            tmp->x = n;
            tmp->next = NULL;
            if (head == NULL)
            {
                head = tmp;
                tail = tmp;
            }
            else
            {
                tail->next = tmp;
                tail = tmp;
            }
        }
    }
    return head; // 返回单链表头
}
struct cell *sort(struct cell *head)
{ // 递增排序链表，head是单链表首结点指针
    struct cell *p, *p0, *r, *r0, *q;
    p = p0 = r = r0 = q = NULL;
    p = head;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (p != NULL)
    {
        // 从原链表中取出当前节点 p，并让 p 指向下一个节点
        struct cell *cur = p;
        p = p->next;
        // 在新链表 q 中为 current 找到插入位置
        // r0 是前驱节点，r 是比较节点
        r0 = NULL;
        r = q;
        while (r != NULL && cur->x > r->x)
        {
            r0 = r;
            r = r->next;
        }
        // 插入 current 节点
        if (r0 == NULL)
        {
            // 插入到新链表的头部
            cur->next = q;
            q = cur;
        }
        else
        {
            // 插入到新链表的中间或尾部
            cur->next = r;
            r0->next = cur;
        }
    }
    // 排序完成后，新链表的头是 q
    head = q;
    return head;
} /*  sort */
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
    if (head != NULL)
    {
        head = sort(head);
        print(head);
    }
    else
        printf("NULL");
    release(head);
    return 0;
}