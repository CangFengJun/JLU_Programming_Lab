#include <stdio.h>
#include <limits.h>

int a[105];
int n;

int max_rec(int i)
{
    if (i == n - 1) return a[i];
    int rest_max = max_rec(i + 1);            
    if (a[i] > rest_max) return a[i];
    return rest_max;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("%d", max_rec(0));
    return 0;
}