#include <stdio.h>

char c[1005];
int cnt = 0;

void count(char *s, int *cnt)
{
    char *p = s;
    while (*p != '\0')
    {
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
        {
            (*cnt)++;
            while ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) 
                p++;
        }
        else p++;
    }
}

int main()
{
    fgets(c, sizeof(c), stdin);
    count(c, &cnt);
    printf("%d", cnt);
    return 0;
}