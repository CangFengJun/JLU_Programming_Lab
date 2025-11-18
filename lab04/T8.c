#include <stdio.h>

int a[15][15];
int n;

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            scanf("%d", &a[i][j]);
    for (int j = 1; j <= n; ++j)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (i == n) printf("%d", a[i][j]);
            else printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}