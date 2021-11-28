#include <stdio.h>
int main()
{
    int n, i, j, temp = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", temp);
            temp += 2;
        }
        printf("\n");
    }
}