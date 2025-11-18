#include <stdio.h>

int c(int m, int n)
{
    if (n < 0) return 0;
    if (n == 0) return 1;
    if (n == 1) return m;
    if (m < 2 * n) return c(m, m - n);
    return c(m - 1, n - 1) + c(m - 1, n);
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int ans = c(x, y);
    printf("%d", ans);
    return 0;
}