#include <stdio.h>
int n, j;
int a[100005];
int main()
{
    scanf("%d%d", &n, &j);
    j %= n;
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    for (int i = n - j + 1; i <= n; ++i)
        printf("%d ", a[i]);
    for (int i = 1; i <= n - j; ++i)
        printf("%d ", a[i]);
    return 0;
}