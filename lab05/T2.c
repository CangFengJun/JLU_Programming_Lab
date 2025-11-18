#include <stdio.h>

char c[1005];

int upper = 0, lower = 0, space = 0, num = 0, other = 0;

void count(char *str, int *upper, int *lower, int *space, int *num, int *other)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            (*upper)++;
        else if (*str >= 'a' && *str <= 'z')
            (*lower)++;
        else if (*str == ' ')
            (*space)++;
        else if (*str >= '0' && *str <= '9')
            (*num)++;
        else if (*str != '\n')
            (*other)++;
        str++;
    }
}

int main()
{
    fgets(c, sizeof(c), stdin);
    count(c, &upper, &lower, &space, &num, &other);
    printf("%d %d %d %d %d", upper, lower, space, num, other);
    return 0;
}