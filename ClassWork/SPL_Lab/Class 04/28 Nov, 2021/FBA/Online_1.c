#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    // upper portion of the pyramid
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    // lower portion of the pyramid
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
