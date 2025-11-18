#include <stdio.h>

int n, k;
int ans = 1;

void cut(int len)
{
    if (len <= k) return;
    ans++;
    int s = (int)(len * 0.4 + 0.5); //四舍五入
    cut(s);
    cut(len - s);
}

int main()
{
    scanf("%d%d", &n, &k);
    cut(n);
    printf("%d", ans);
    return 0;
}