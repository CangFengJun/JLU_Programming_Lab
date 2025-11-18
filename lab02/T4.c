#include <stdio.h>

int main()
{
    int n, year, sum;
    scanf("%d%d", &n, &year);
    if (n == 1)
    {
        if (year <= 65) printf("NULL");
        else
        {
            if (year > 70) printf("70");
            else printf("50");
        }
    }
    if (n == 2)
    {
        if (year <= 60) printf("NULL");
        else
        {
            if (year > 65) printf("70");
            else printf("45");
        }
    }
}