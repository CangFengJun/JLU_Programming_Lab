#include <stdio.h>

int a[105][105];
int n, m;
int cnt = 0;
int *p[100005];

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void arr_sort()
{
    for (int i = 1; i <= n * m; ++i)
    {
        for (int j = 1; j <= n * m - i; ++j)
        {
            if ((*p[j]) >= (*p[j + 1])) swap(p[j], p[j + 1]);
        }
    }
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            scanf("%d", &a[i][j]);
            p[++cnt] = &a[i][j];
        }
    arr_sort();
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            if (j != m)
                printf("%d ", a[i][j]);
            else printf("%d", a[i][j]);
        printf("\n");
    }
    return 0;
}