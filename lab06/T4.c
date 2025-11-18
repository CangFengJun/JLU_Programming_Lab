#include <stdio.h>

typedef struct stu
{
    char name[25];
    int score1;
    int score2;
    int total;
} S;

S a[15];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%s%d%d", a[i].name, &a[i].score1, &a[i].score2);
        a[i].total = a[i].score1 + a[i].score2;
    }
    for (int i = 1; i <= n; ++i)
        printf("%s %d ", a[i].name, a[i].total);
    return 0;
}