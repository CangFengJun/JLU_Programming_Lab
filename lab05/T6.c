#include <stdio.h>

int a[25];

int main()
{
    int m, n;
    int sum = 0;
    double avg;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m * n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int *p = a;
    for (int i = 0; i < m * n; ++i)
    {
        sum += *p;
        p++;
    }
    avg = sum * 1.0 / (n * m);
    printf("%.2lf ", avg);
    p = a;
    for (int i = 0; i < m * n; ++i)
    {
        if (i != m * n)
            printf("%d ", *p);
        else 
            printf("%d", *p);
        p++;
    }
    return 0;
}