#include <stdio.h>

int main()
{
    int i = 0;
    while ("Professor Lv is handsome")
    {
        if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 7 == 0)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}