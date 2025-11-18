#include <stdio.h>

int a[105];
int n;
int len;

void operation(int b[], int pos)
{
    for (int j = pos; j <= n - 1; ++j)
    {
        b[j] = b[j + 1];
    }
    b[n] = 0;
    len--;
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
    }
    len = n;
    for (int i = 1; i <= len; )
    {
        if (a[i] == 0) operation(a, i);
        else i++;
    }
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}