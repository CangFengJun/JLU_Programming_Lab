#include <stdio.h>

typedef struct number
{
    double real;
    double imaginary;
} N;


int main()
{
    N a, b, c1, c2, c3;
    scanf("%lf%lf%lf%lf", &a.real, &a.imaginary, &b.real, &b.imaginary);
    // add
    c1.real = a.real + b.real;
    c1.imaginary = a.imaginary + b.imaginary;
    if (c1.imaginary > 0) printf("%.2lf+%.2lfi", c1.real, c1.imaginary);
    if (c1.imaginary == 0) printf("%.2lf", c1.real);
    if (c1.imaginary < 0) printf("%.2lf%.2lfi", c1.real, c1.imaginary);
    printf("    ");
    // sub
    c2.real = a.real - b.real;
    c2.imaginary = a.imaginary - b.imaginary;
    if (c2.imaginary > 0) printf("%.2lf+%.2lfi", c2.real, c2.imaginary);
    if (c2.imaginary == 0) printf("%.2lf", c2.real);
    if (c2.imaginary < 0) printf("%.2lf%.2lfi", c2.real, c2.imaginary);
    printf("    ");
    // mul
    c3.real = a.real * b.real - a.imaginary * b.imaginary;
    c3.imaginary = a.real * b.imaginary + b.real * a.imaginary;
    if (c3.imaginary > 0) printf("%.2lf+%.2lfi", c3.real, c3.imaginary);
    if (c3.imaginary == 0) printf("%.2lf", c3.real);
    if (c3.imaginary < 0) printf("%.2lf%.2lfi", c3.real, c3.imaginary);
    return 0;
}