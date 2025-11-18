#include <stdio.h>

double dg(double x, int n)
{
    if (n == 0) return 1.0;
    if (n == 1) return x;
    return ((2.0 * n - 1.0) / n) * x * dg(x, n - 1) - ((n - 1.0) / n) * dg(x, n - 2);
}

int main()
{
    double a;
    int b;
    scanf("%lf%d", &a, &b); 
    printf("%.2lf", dg(a, b));
    return 0;
}