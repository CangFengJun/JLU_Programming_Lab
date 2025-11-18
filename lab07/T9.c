#include <stdio.h>

long long n, b;
char c[100005];
int len = 0;

void trans(long long n, int b)
{
    if (n == 0) return;
    int res = n % b;
    if (res >= 0 && res <= 9) c[++len] = res + '0';
    else c[++len] = 'A' + (res - 10);
    trans(n / b, b);
}

int main()
{
    scanf("%lld%d", &n, &b);
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    trans(n, b);
    for (int i = len; i >= 1; --i) printf("%c", c[i]);
    return 0;
}