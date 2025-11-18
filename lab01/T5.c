#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z;
    float A, B, C, D;
    float d;
    scanf("%f%f%f", &x, &y, &z);
    scanf("%f%f%f%f", &A, &B, &C, &D);
    d = fabs(A * x + B * y + C * z + D) / sqrt(pow(A, 2) + pow(B, 2) + pow(C, 2));
    printf("%.3f", d);
}