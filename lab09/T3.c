#include <stdio.h>
#include <malloc.h>

// 单链表结点结构体定义
struct cell {
    int x;
    struct cell *next;
};

// 新建单链表，并将建好的单链表首结点地址返回
struct cell *build(void) {
    struct cell *head, *tmp, *p;
    head = tmp = p = NULL;
    int n;
    while (scanf("%d", &n))
    {
        if (n == 0) break;
        else
        {
            tmp = (struct cell *)malloc(sizeof(struct cell));
            tmp->next = NULL;
            tmp->x = n;
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

// 寻找链表中间位置结点地址并返回，head是单链表首结点指针
struct cell *mid(struct cell *head) {
    struct cell *fast, *slow;
    // 处理边界情况：空链表或只有一个节点的链表
    if (head == NULL || head->next == NULL) 
        return head;
    slow = head;
    fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// 打印整个单链表,head是指向单链表首结点指针
void print(struct cell *head) {
    struct cell *p;
    for (p = head; p; p = p->next)
    {
        if (p->next == NULL) printf("%d", p->x);
        else printf("%d ", p->x);
    }
}

// 释放单链表空间,head是指向单链表首结点指针
void release(struct cell *head) {
    struct cell *p, *q;
    for (p = head; p; p = q)
    {
        q = p->next;
        free(p);
    }
}

int main(void) {
    struct cell *head, *half;
    head = build();
    half = mid(head);
    if (half != NULL) {
        print(half);
    } else {
        printf("NULL");
    }
    release(head);
    return 0;
}