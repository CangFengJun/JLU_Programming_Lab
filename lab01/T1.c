#include <stdio.h>
#include <math.h>

int main()
{
    float a, x, y;
    scanf("%f%f", &a, &x);
    y = sin(x) / (a * x) + fabs(cos(3.1415926 * x / 2));
    printf("%.3f", y);
    return 0;
}