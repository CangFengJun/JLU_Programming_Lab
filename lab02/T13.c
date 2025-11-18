#include <stdio.h>

int main()
{
    int n;
    double ans = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        ans = ans * 2 * i * 2 * i / (2 * i - 1) / (2 * i + 1);
    }
    ans *= 2;
    printf("%.10lf", ans);
    return 0;
}