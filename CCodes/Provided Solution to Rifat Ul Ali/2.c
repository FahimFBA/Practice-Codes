#include <stdio.h>

int SumOfDigits(int number);

int main()
{
    int number, sum;
    scanf("%d", &number);
    sum = SumOfDigits(number);
    printf("%d\n", sum);
    return 0;
}

int SumOfDigits(int number)
{
    int result;
    if (number == 0)
    {
        return 0;
    }
    else
    {
        result = ((number % 10) + SumOfDigits(number / 10));
        return result;
    }
}