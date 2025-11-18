#include <stdio.h>
#include <malloc.h>

struct farlei_item
{
    int numerator, denominator; // 分子、分母
    struct farlei_item *next;   // 连接部分
};
typedef struct farlei_item *farleipointer;

/* 求最大公约数 */
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

/*构造法雷序列,并返回序列头指针*/
farleipointer farlei(int n)
{
    int i, j;
    farleipointer fn, r, r0, p;
    fn = r = r0 = p = NULL;

    if (n < 1)
    {
        return NULL; // 如果n<=0,则没有法雷序列
    }

    fn = (farleipointer)malloc(sizeof(struct farlei_item)); // 构造0/1
    fn->numerator = 0;
    fn->denominator = 1;

    p = (farleipointer)malloc(sizeof(struct farlei_item)); // 构造1/1
    p->numerator = 1;
    p->denominator = 1;
    fn->next = p;
    p->next = NULL;

    for (j = 2; j <= n; j++)
    {
        for (i = 1; i < j; i++)
        {
            // 如果是最简分数
            if (gcd(i, j) == 1)
            {
                // 创建新节点
                p = (farleipointer)malloc(sizeof(struct farlei_item));
                p->numerator = i;
                p->denominator = j;
                // 找到正确的插入位置并插入
                for (r0 = fn, r = fn->next; r; r0 = r, r = r->next)
                {
                    if (p->numerator * r->denominator < r->numerator * p->denominator)
                    {
                        r0->next = p;
                        p->next = r;
                        break;
                    }
                }
            }
        }
    }

    return fn;
}

// 输出fn引导的法雷序列
void print(farleipointer fn)
{
    farleipointer p;
    for (p = fn; p; p = p->next)
    {
        if (p->next == NULL)
            printf("%d/%d", p->numerator, p->denominator);
        else
            printf("%d/%d ", p->numerator, p->denominator);
    }
}

// 释放单链表空间,head是单链表首结点指针
void release(farleipointer head)
{
    farleipointer p, q;
    for (p = head; p; p = q)
    {
        q = p->next;
        free(p);
    }
}

int main(void)
{
    int n;
    farleipointer fn;

    scanf("%d", &n);
    fn = farlei(n); // 生成n级法雷序列

    if (fn != NULL)
    {
        print(fn);
    }
    else
    {
        printf("NULL");
    }

    release(fn);
    return 0;
}