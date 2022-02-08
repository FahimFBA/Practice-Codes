#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int i, j, n, flag, sum = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            sum += factorial(i);
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}