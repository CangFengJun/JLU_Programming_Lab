#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 90) printf("A");
    if (n >= 80 && n <= 89) printf("B");
    if (n >= 70 && n <= 79) printf("C");
    if (n >= 60 && n <= 69) printf("D");
    if (n < 60) printf("E");
    return 0;
}