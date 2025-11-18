#include <stdio.h>

int a[105][105];

int main()
{
    int n;
    scanf("%d", &n);
    int x = 1, y = 1;
    int dir = 0; // 0:向右, 1:向下, 2:向左, 3:向上
    // dx[0]=0, dy[0]=1 向右 
    // dx[1]=1, dy[1]=0 向下 
    // dx[2]=0, dy[2]=-1 向左 
    // dx[3]=-1, dy[3]=0 向上 
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    for (int i = 1; i <= n * n; ++i)
    {
        a[x][y] = i;
        int next_x = x + dx[dir];
        int next_y = y + dy[dir];
        if (next_x < 1 || next_x > n || next_y < 1 || next_y > n || a[next_x][next_y] != 0)
        {
            dir = (dir + 1) % 4;
        }
        x = x + dx[dir];
        y = y + dy[dir];
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}