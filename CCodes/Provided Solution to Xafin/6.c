#include <stdio.h>
#include <math.h>
int main()
{
    float x = 2.55;
    float result;
    result = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;
    printf("%f", result);
    return 0;
}