#include <stdio.h>

void one(int n)
{
    if (n == 1) printf("one");
    if (n == 2) printf("two");
    if (n == 3) printf("three");
    if (n == 4) printf("four");
    if (n == 5) printf("five");
    if (n == 6) printf("six");
    if (n == 7) printf("seven");
    if (n == 8) printf("eight");
    if (n == 9) printf("nine");
}

void ten(int n)
{
    int tenth = n / 10;
    int oneh = n % 10;
    if (tenth == 1)
    {
        if (oneh == 0) printf("ten");
        if (oneh == 1) printf("eleven");
        if (oneh == 2) printf("twelve");
        if (oneh == 3) printf("thirteen");
        if (oneh == 4) printf("fourteen");
        if (oneh == 5) printf("fifteen");
        if (oneh == 6) printf("sixteen");
        if (oneh == 7) printf("seventeen");
        if (oneh == 8) printf("eighteen");
        if (oneh == 9) printf("nineteen");
    }
    else
    {
        if (tenth == 2) printf("twenty");
        if (tenth == 3) printf("thirty");
        if (tenth == 4) printf("forty");
        if (tenth == 5) printf("fifty");
        if (tenth == 6) printf("sixty");
        if (tenth == 7) printf("seventy");
        if (tenth == 8) printf("eighty");
        if (tenth == 9) printf("ninety");
        if (oneh != 0)
        {
            printf("-");
            one(oneh);
        }
    }
}

void hundred(int n)
{
    int hun = n / 100;
    int tenh = n % 100;
    one(hun);
    printf(" hundred");
    if (tenh >= 10)
    {
        printf(" and ");
        ten(tenh);
    }
    if (tenh > 0 && tenh <= 9)
    {
        printf(" and ");
        one(tenh);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("zero");
        return 0;
    }
    if (n < 10) one(n);
    else if (n < 100) ten(n);
    else hundred(n);
    return 0;
}