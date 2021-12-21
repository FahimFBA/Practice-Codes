#include <stdio.h>
int main()

{
    int i, j, t;
    printf("Enter the value of i : ");
    scanf("%d", &i);
    printf("Enter the value of j : ");
    scanf("%d", &j);
    t = i + j - i % j;
    printf("The round off of %d to the next largest even multiple %d is %d.\n", i, j, t);
    return 0;
}