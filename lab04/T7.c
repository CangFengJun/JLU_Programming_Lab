#include <stdio.h>

int n;
int a[105];

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n * n; ++i)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n * n; ++i)
    {
        for (int j = i + 1; j <= n * n; ++j)
        {
            if (a[j] == a[i])
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}