#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef long long ll;

bool isprime(ll x)
{
    for (ll i = 2; i <= sqrt(x); ++i)
        if (x % i == 0) return 0;
    return 1;
}

int main()
{
    ll n;
    scanf("%lld", &n);
    if (isprime(n)) printf("Y");
    else printf("N");
}