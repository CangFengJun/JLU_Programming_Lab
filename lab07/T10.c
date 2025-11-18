#include <stdio.h>

int n, len = 0;
int a[100005];

void operation(int n)
{
    if (n == 0) return;
    a[++len] = n % 10;
    operation(n / 10);
}

int main()
{
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    operation(n);
    for (int i = len; i >= 1; --i)
        printf("%d ", a[i]);
    return 0;
}