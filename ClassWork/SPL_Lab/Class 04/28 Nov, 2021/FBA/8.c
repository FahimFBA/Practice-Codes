#include <stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (temp = 1; temp <= n - i; temp++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}