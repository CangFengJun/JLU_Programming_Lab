#include <stdio.h>

int a[15];

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        if (a[i] % n == 0) sum += a[i];
    }
    printf("%d", sum);
    return 0;
}