#include <stdio.h>

char c[105];

int len(int x)
{
    if (c[x] == '\0') return x;
    return len(x + 1);
}

int main()
{
    fgets(c, sizeof(c), stdin);
    int ans = len(0);
    printf("%d", ans);
    return 0;
}