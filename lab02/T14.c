#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cnt_space = 2 * n - 2;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= cnt_space; ++j)
        {
            printf(" ");
        }
        cnt_space -= 2;
        for (int j = 1; j <= i; ++j)
        {
            if(j == 10) printf(" %d", 0);
            else printf(" %d", j);
        }
        for (int j = i - 1; j >= 1; --j)
        {
            printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}