#include <stdio.h>

int main()
{
    int n, f1 = 0, f2 = 0, f3 = 0;
    scanf("%d", &n);
    if (n % 3 == 0) f1 = 1;
    if (n % 5 == 0) f2 = 1;
    if (n % 7 == 0) f3 = 1;
    if (f1 == 0 && f2 == 0 && f3 == 0) printf("NULL");
    if (f1 == 1 && f2 == 0 && f3 == 0) printf("3");
    if (f1 == 0 && f2 == 1 && f3 == 0) printf("5");
    if (f1 == 0 && f2 == 0 && f3 == 1) printf("7");
    if (f1 == 1 && f2 == 1 && f3 == 0) printf("3,5");
    if (f1 == 1 && f2 == 0 && f3 == 1) printf("3,7");
    if (f1 == 0 && f2 == 1 && f3 == 1) printf("5,7");
    if (f1 == 1 && f2 == 1 && f3 == 1) printf("3,5,7");
    return 0;
}