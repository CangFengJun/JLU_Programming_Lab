#include <stdio.h>
#include <string.h>

int v, w;
char c[1005];
int len;

char *str_delete(char *s, int v, int w)
{
    for (int i = 1; i <= w; ++i)
    {
        len--;
        for (int j = v; j <= len; ++j)
        {
            s[j - 1] = s[j];
        }
    }
    return s;
}

int main()
{
    scanf("%d%d", &v, &w);
    getchar();
    fgets(c, sizeof(c), stdin);
    len = strlen(c);
    if (len > 0 && c[len - 1] == '\n')
    {
        c[len - 1] = '\0';
        len--;
    }
    str_delete(c, v, w);
    for (int i = 0; i < len; ++i)
    {
        printf("%c", c[i]);
    }
    return 0;
}