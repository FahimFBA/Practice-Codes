#include<stdio.h>
#include <stdlib.h>
int compare (const void * a, const void * b);
int main()
{
    int n, i, j, sum1 = 0 , sum2 = 0, count = 0;
    scanf("%d" , &n);
    int array[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d" , &array[i]);
        sum1 += array[i];
    }
    sum1 /= 2;
    int	Length  = sizeof(array)/sizeof(int);
    qsort(array, Length, sizeof(int), compare);
    for(j = n - 1; j >= 0; j--)
    {
        sum2 += array[j];
        count++;
        if(sum1 < sum2)
        {
            break;
        }
    }
    printf("%d\n" , count);
    return 0;
}
int compare (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}