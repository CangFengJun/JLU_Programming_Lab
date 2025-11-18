#include <stdio.h>

long long rev(long long x)
{
    long long ans = 0;
    int f = 0; //判断首位不是0
    while(x != 0)
    {
        if (x % 10 != 0) f = 1;
        if (f == 0 && x % 10 == 0)
        {
            x /= 10;
            continue;
        }
        int num = x % 10;
        x /= 10;
        ans = ans * 10 + num;
    }
    return ans;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    if (n <= 0) 
    {
        printf("NULL");
        return 0;
    }
    printf("%lld", rev(n));
    return 0;
}