#include <stdio.h>

int ack(int m, int n)
{
    if (m == 0) return n + 1;
    if (n == 0) return ack(m - 1, 1);
    return ack(m - 1, ack(m, n - 1));
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int ans = ack(m, n);
    printf("%d", ans);
    return 0;
}