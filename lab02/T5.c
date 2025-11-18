#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);
    float ans = 1 + 1 / (1 + 1 / (1 + 1 / (1 + 1 / (1 + 1 / x))));
    printf("%.3f", ans);
    return 0;
}