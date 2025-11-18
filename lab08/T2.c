#include <stdio.h>
#include <string.h>

int n;
int cnt = 0;

int a[15]; //矩阵列坐标
int x[35]; //主对角线及其平行线
int y[35]; //副对角线及其平行线

void queen(int cur)
{
    if (cur == n + 1)
    {
        cnt++;
        return;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == 0 && x[n - cur + i] == 0 && y[n * 2 - cur - i + 1] == 0)
        {
            a[i] = 1;
            x[n - cur + i] = 1;
            y[n * 2 - cur - i + 1] = 1;
            queen(cur + 1);
            //初始化，不要影响下一次落子
            a[i] = 0;
            x[n - cur + i] = 0;
            y[n * 2 - cur - i + 1] = 0;
        }
    }
}

int main()
{
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    memset(x, 0, sizeof(x));
    memset(y, 0, sizeof(y));
    queen(1); //从第一行开始遍历
    printf("%d\n", cnt);
    return 0;
}