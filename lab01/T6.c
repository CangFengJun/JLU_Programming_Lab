#include <stdio.h>

int main()
{
    int s;
    scanf("%d", &s);
    s %= 86400;
    int hour = s / 3600;
    int minute = s % 3600 / 60;
    int second = s % 60;
    printf("%02d:%02d:%02d", hour, minute, second);
    return 0;
}