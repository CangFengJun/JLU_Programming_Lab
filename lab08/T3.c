#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int cnt = 0;

int a[15]; // 矩阵列坐标
int x[35]; // 主对角线及其平行线
int y[35]; // 副对角线及其平行线

int path[15];      // 记录当前方案的列位置
int res[105][15];  // 存储唯一解

// 检查一个解是否是另一个解的对称或旋转形式
// p1 和 p2 都是长度为9的数组(索引从1到8)
// p1对应path[i], p2对应res[][i]
bool is_duplicate(int p1[], int p2[])
{
    int temp[15];
    // 8种变换
    int transforms[15][15];
    // 1. 原始
    memcpy(transforms[1], p2, sizeof(temp));
    // 2. 左右翻转
    for (int i = 1; i <= 8; i++) transforms[2][i] = 9 - p2[i];
    // 3. 上下翻转
    for (int i = 1; i <= 8; i++) transforms[3][i] = p2[9 - i];
    // 4. 主对角线翻转
    for (int i = 1; i <= 8; i++) temp[p2[i]] = i;
    memcpy(transforms[4], temp, sizeof(temp));
    // 5. 副对角线翻转
    for (int i = 1; i <= 8; i++) temp[9 - p2[i]] = 9 - i;
    memcpy(transforms[5], temp, sizeof(temp));
    // 6. 旋转90度
    for (int i = 1; i <= 8; i++) temp[p2[i]] = 9 - i;
    memcpy(transforms[6], temp, sizeof(temp));
    // 7. 旋转180度
    for (int i = 1; i <= 8; i++) transforms[7][9 - i] = 9 - p2[i];
    // 8. 旋转270度
    for (int i = 1; i <= 8; i++) temp[9 - p2[i]] = i;
    memcpy(transforms[8], temp, sizeof(temp));
    // 检查p1是否与p2的任何一种变换形式相同
    for (int i = 1; i <= 8; i++)
    {
        bool flag = 1;
        for (int j = 1; j <= 8; j++)
        {
            if (p1[j] != transforms[i][j])
            {
                flag = 0;
                break;
            }
        }
        if (flag) return 1; // 是重复的
    }
    return 0; // 不是重复的
}

//判断是否是本质不同解
void add_solution()
{
    for (int i = 0; i < cnt; i++)
    {
        if (is_duplicate(path, res[i]))
        {
            return; // 如果是重复的，则不添加
        }
    }
    for (int i = 1; i <= 8; i++)
    {
        res[cnt][i] = path[i];
    }
    cnt++;
}

void queen(int cur)
{
    if (cur == 9)
    {
        add_solution();
        return;
    }
    for (int i = 1; i <= 8; ++i)
    {
        if (a[i] == 0 && x[8 - cur + i] == 0 && y[8 * 2 - cur - i + 1] == 0)
        {
            a[i] = 1;
            x[8 - cur + i] = 1;
            y[8 * 2 - cur - i + 1] = 1;
            path[cur] = i;
            queen(cur + 1);
            //初始化，不要影响下一次落子
            a[i] = 0;
            x[8 - cur + i] = 0;
            y[8 * 2 - cur - i + 1] = 0;
            path[cur] = 0;
        }
    }
}

int main()
{
    memset(a, 0, sizeof(a));
    memset(x, 0, sizeof(x));
    memset(y, 0, sizeof(y));
    queen(1); //从第一行开始遍历
    for (int i = 0; i < cnt; ++i)
    {
        printf("No%d:", i + 1);
        for (int j = 1; j <= 8; ++j)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}