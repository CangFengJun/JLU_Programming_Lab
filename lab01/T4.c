#include <stdio.h>

int main()
{
    int a, b;
    int sum1, sum2, sum3, sum4, sum5;
    scanf("%d%d", &a, &b);
    sum1 = a + b;
    sum2 = a - b;
    sum3 = a * b;
    sum4 = a / b;
    sum5 = a % b;
    printf("%d %d %d %d %d", sum1, sum2, sum3, sum4, sum5);
    return 0;
}