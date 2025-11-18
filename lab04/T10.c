#include <stdio.h>
#include <string.h>

char c[1005];
char ch;
int i = 0;

int main()
{
    fgets(c, sizeof(c), stdin);
    int len = strlen(c);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", c[i]);
}