// printing a series upto the Nth terms like this: 5 + 4 + 3 + 2 + 0

#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        printf("%d + ", i);
    }
    printf("0\n");
    return 0;
}
