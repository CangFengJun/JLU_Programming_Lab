#include <stdio.h>
#include <string.h>

int a[1005];

int main()
{
    int n, s, m;
    scanf("%d%d%d", &n, &s, &m);
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        a[i] = 1; //1:活着 0:死了
    }
    int left = n; //还剩几个活着的
    for (int i = s; i <= n; ++i)
    {
        if (a[i] == 1)
        {
            cnt++;
            if (cnt == m)
            {
                a[i] = 0;
                printf("%d ", i);
                cnt = 0;
                left--;
            }
        }
    }
    while (left > 1)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] == 1)
            {
                cnt++;
                if (cnt == m)
                {
                    a[i] = 0;
                    printf("%d ", i);
                    cnt = 0;
                    left--;
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i)
        if (a[i] == 1)
        {
            printf("%d", i);
            break;
        }
    return 0;
}