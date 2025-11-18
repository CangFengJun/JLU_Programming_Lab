#include <stdio.h>

long long a[105];

long long __gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int n;
    long long gcd, lcm;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%lld", &a[i]);
    }
    gcd = __gcd(a[1], a[2]);
    lcm = a[1];
    for (int i = 2; i <= n; ++i)
    {
        gcd = __gcd(lcm, a[i]);
        lcm = lcm * a[i] / gcd;
    } 
    printf("%d", lcm);
}