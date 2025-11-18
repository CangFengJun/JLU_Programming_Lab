#include <stdio.h>

int a[105];
int n;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void rev(int i)
{
    if (i == n / 2 + 1) return;
    swap(&a[i], &a[n + 1 - i]);
    rev(i + 1);
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    rev(0);
    for (int i = 1; i <= n; ++i)
    {
        if (i == n) printf("%d", a[i]);
        else printf("%d ", a[i]);
    }
    return 0;
}