#include <stdio.h>

char c[1005];

int lenth(char *s)
{
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}

int main()
{
    fgets(c, sizeof(c), stdin);
    int len = lenth(c);
    if (c[len - 1] == '\n') printf("%d", --len);
    else printf("%d", len);
    return 0;
}