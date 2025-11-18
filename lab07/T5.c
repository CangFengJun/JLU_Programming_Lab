#include <stdio.h>

int a[105];
int n, x;

int find(int i)
{
    if (a[i] == x) return i;
    if (i == n - 1 && a[i] != x) return -1;
    return find(i + 1);
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    int ans = find(0);
    if (ans == -1) printf("NULL");
    else printf("%d", ans);
    return 0;
}