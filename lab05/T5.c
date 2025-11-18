#include <stdio.h>
#include <string.h>

int valid = 0, invalid = 0;

void count(char *s, int *valid, int *invalid)
{
    int len = strlen(s);
    char *p = s;
    if (s[0] == '_' || (s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z'))
    {
        while (*p != '\0')
        {
            if (*p == '_' || (*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z') || (*p >= '0' && *p <= '9'))
            {
                p++;
            }
            else 
            {
                (*invalid)++;
                return;
            }
        }
        (*valid)++;
        return;
    }
    else
    {
        (*invalid)++;
        return;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 1; i <= n; ++i)
    {
        char c[1005];
        fgets(c, sizeof(c), stdin);
        int len = strlen(c);
        if (len > 0 && c[len - 1] == '\n')
        {
            c[len - 1] = '\0';
            len--;
        }
        count(c, &valid, &invalid);
    }
    printf("Valid:%d\nInvalid:%d", valid, invalid);
    return 0;
}