#include <stdio.h>

int a[100005];

int main()
{
    int n, x;
    int len = 1;
    scanf("%d%d", &n, &x);
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    while (n > 0)
    {
        a[len] = n % x;
        n /= x;
        len++;
    }
    for (int i = len - 1; i >= 1; i--)
    {
        printf("%d", a[i]);
    }
}