#include <stdio.h>

double h(int n, double x)
{
    if (n == 0) return 1;
    if (n == 1) return 2 * x;
    return 2 * x * h(n - 1, x) - 2 * (n - 1) * h(n - 2, x);
}

int main()
{
    int n;
    double x;
    scanf("%d%lf", &n, &x);
    double ans = h(n, x);
    printf("%.2lf", ans);
    return 0;
}