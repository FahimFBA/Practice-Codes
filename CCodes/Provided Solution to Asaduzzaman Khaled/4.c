#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d" , &a, &b, &c, &d);
    printf("%d * %d + (%d - %d) / %d + %d = %d\n" , a, b, a, c, d, b, (a * b + (a - c) / d + b));
}