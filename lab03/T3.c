#include <stdio.h>
#include <math.h>

double x[15];
double y[15];

int main()
{
    int n;
    double c = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%lf%lf", &x[i], &y[i]);
        if (n == 1)
        {
            printf("0.00");
            return 0;
        }
        if (i >= 2)
        {
            c += sqrt(pow(x[i] - x[i - 1], 2) + pow(y[i] - y[i - 1], 2));
        }
    }
    if (n >= 3) c += sqrt(pow(x[n] - x[1], 2) + pow(y[n] - y[1], 2));
    printf("%.2lf", c);
    return 0;
}