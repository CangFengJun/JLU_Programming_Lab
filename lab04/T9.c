#include <stdio.h>

int a[15][15];
int n;

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            scanf("%d", &a[i][j]);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (a[i][j] != a[j][i])
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}