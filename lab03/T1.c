#include <stdio.h>

int x, y;

long long f(int m, int n)
{
    if (m < n && m > 0 && n > 0) return 0;
    if (m == n && m > 0 && n > 0) return 1;
    if (m > n && m > 0 && n > 0) 
    {
        long long ans = 1;
        for (int i = 2; i <= m; ++i) ans *= i;
        for (int i = 2; i <= n; ++i) ans /= i;
        for (int i = 2; i <= (m - n); ++i) ans /= i;
        return ans;
    }
    return -1;
}

int main()
{
    scanf("%d%d", &x, &y);
    printf("%lld", f(x, y));
    return 0;
}