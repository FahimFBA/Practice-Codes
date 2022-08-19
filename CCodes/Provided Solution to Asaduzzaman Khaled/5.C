#include<stdio.h>
int main()
{
    float a, b, c, d;
    scanf("%f%f%f%f" , &a, &b, &c, &d);
    printf("(%.1f + %.1f - %.1f) * %.1f - %.1f / %.1f = %.6f\n" , a, b, c, d, a, d, ((a + b - c) * d - a / d));
}