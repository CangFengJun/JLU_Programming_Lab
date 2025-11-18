#include <stdio.h>

int main()
{
    for (int i = 100; i <= 999; ++i)
    {
        int bw = i / 100;
        int sw = i % 100 / 10;
        int gw = i % 10;
        if (i == (bw * bw * bw + sw * sw * sw + gw * gw * gw)) printf("%d ", i);
    }
    return 0;
}