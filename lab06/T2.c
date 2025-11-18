#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct teacher
{
    char name[25];
    bool sex;
    int age;
} T;

T a[15];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%s%d%d", a[i].name, &a[i].sex, &a[i].age);
    }
    int ans = n / 2;
    if (a[ans].sex == 0) printf("%s Female %d", a[ans].name, a[ans].age);
    else printf("%s Male %d", a[ans].name, a[ans].age);
    return 0;
}