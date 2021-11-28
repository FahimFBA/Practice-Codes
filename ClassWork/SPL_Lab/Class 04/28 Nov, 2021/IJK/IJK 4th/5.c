#include <stdio.h>
int main()
{
    int n, i, j, s;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
         for (s = 1; s <= n + i; s++)
        {
            printf(" ");
        }
         for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }


        printf("\n");
    }
   for (i = n-1; i >= 1; i--)
    {
        for (s = n-i; s >= 1; s--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
         
        printf("\n");
    }


    return 0;
}