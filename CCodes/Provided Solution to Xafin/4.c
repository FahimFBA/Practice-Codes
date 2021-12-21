#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("The temperature in celsius is: %.2f", c);
}