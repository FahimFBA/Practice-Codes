#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    int i, value;
    printf("3 ");
    for (i = 2; i <= n; i++)
    {
        value = 3 + (i - 1) * 8;
        if (i % 2 != 0)
        {
            printf("+ %d ", value);
        }
        else
        {
            printf("- %d ", value);
        }
    }
    printf("\n");
}