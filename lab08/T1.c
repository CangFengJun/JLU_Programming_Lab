#include <stdio.h>
#include <string.h>

int n;

int res[1005];

void dfs(int cur, int mini, int step)
{
    if (cur == n)
    {
        printf("%d=", n);
        for (int i = 1; i <= step - 1; ++i)
        {
            if (i == 1) printf("%d", res[i]);
            else printf("+%d", res[i]);
        }
        printf("\n");
        return;
    }
    for (int i = mini; i >= 1; --i)
    {
        if (cur + i > n) continue;
        if (i <= mini) mini = i;
        res[step] = i;
        dfs(cur + i, mini, step + 1);
        res[step] = 0; //初始化
    }
} 

int main()
{
    scanf("%d", &n);
    memset(res, 0, sizeof(res));
    dfs(0, n - 1, 1);
    return 0;
}