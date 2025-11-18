#include <stdio.h>

long long a[105];

int main()
{
    int n;
    scanf("%d", &n);
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("%lld", a[n]);
}