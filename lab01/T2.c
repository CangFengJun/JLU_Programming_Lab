#include <stdio.h>

int main()
{
    char x, y, z;
    scanf("%c", &y);
    int x_ascll = (int)y - 1;
    int z_ascll = (int)y + 1;
    x = (char)x_ascll;
    z = (char)z_ascll;
    printf("%c%c%c", x, y, z);
    return 0;
}