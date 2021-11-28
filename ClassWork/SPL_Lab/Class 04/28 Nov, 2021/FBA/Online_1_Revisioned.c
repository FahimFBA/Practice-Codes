#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n * 2 - 1; i++)
    {
        if (i < n)
        {
            for (j = 1; j <= i; j++)
            {

                printf("%d ", j);
            }
            printf("\n");
        }
        else
        {
             for(j = 1; j <= n*2-1-i-1; j++)
           // for (j = n * 2 - 1 - i; j >= 1; j--)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
}
