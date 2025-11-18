#include <stdio.h>

int main()
{
    char a[105], ch;
    int i = 0;
    int flag1 = 0, flag2 = 0, flag3 = 0;
    while ((ch = getchar()) != '@')
    {
        a[++i] = ch;
    }
    for (int j = 0; j <= i; ++j)
    {
        if (a[j] == '{') flag1++;
        if (a[j] == '}') flag1--;
        if (a[j] == '[') flag2++;
        if (a[j] == ']') flag2--;
        if (a[j] == '(') flag3++;
        if (a[j] == ')') flag3--;
    }
    if (flag1 == 0 && flag2 == 0 && flag3 == 0) printf("NULL");
    else 
    {
        if (flag1 != 0) printf("{}");
        if (flag2 != 0) printf("[]");
        if (flag3 != 0) printf("()");
    }
    return 0;
}