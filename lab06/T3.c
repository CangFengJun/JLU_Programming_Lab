#include <stdio.h>

typedef struct stu
{
    char name[25];
    int score;
} S;

S a[15];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%s%d", a[i].name, &a[i].score);
        if (a[i].score < 60)
            printf("%s %d ", a[i].name, a[i].score);
    }
    return 0;
}