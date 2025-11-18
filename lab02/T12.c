#include <stdio.h>

int main()
{
    double x; 
    double e = 1.0;
    double cache = 1.0;
    scanf("%lf", &x);
    for (int i = 1; i <= 100; ++i)
    {
        cache *= x / i;
        e += cache;
    }
    printf("%.2lf", e);
    return 0;
}