#include <stdio.h>

int a[105];
int n;
int len;

void erase(int b[], int x)
{
    len--;
    for (int k = x; k <= len; ++k)
    {
        b[k] = b[k + 1];
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
    }
    len = n;
    int i = 0;
    for (int i = 1; i <= len; ++i)
    {
        for (int j = i + 1; j <= len; )
        {
            if (a[i] == a[j]) erase(a, j);
            else j++;
        }
        
    }
    for (int i = 1; i <= len; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}