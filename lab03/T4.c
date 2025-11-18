#include <stdio.h>
#include <stdbool.h>

bool isdefence(long long x)
{
    long long square = x * x;
    int f = 0;
    while (x != 0)
    {
        if ((x % 10) == (square % 10)) f = 1;
        if ((x % 10) != (square % 10)) return 0;
        x /= 10;
        square /= 10;
    }
    if (f == 1) return 1;
    return 0;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    for (long long i = 1; i <= n; ++i)
    {
        if (isdefence(i)) printf("%lld ", i);
    }
    return 0;
}