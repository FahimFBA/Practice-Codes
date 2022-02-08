#include <stdio.h>
int factorial(int a);
int find_nCr(int a, int b);
int find_nPr(int a, int b);

int main()
{
    int n, r;
    int nCr, nPr;
    printf("Enter the value for r and n: \n");
    scanf("%d%d", &r, &n);
    nCr = find_nCr(n, r);
    nPr = find_nPr(n, r);
    printf("%d! = %d\n", n, factorial(n));
    printf("%dC%d = %ld\n", n, r, nCr);
    printf("%dP%d = %ld\n", n, r, nPr);
    return 0;
}

int find_nCr(int n, int r)
{
    int result;
    result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}

int find_nPr(int n, int r)
{
    int result;
    result = factorial(n) / factorial(n - r);
    return result;
}

int factorial(int n)
{
    int c;
    int result = 1;
    for (c = 1; c <= n; c++)
    {
        result = result * c;
    }
    return result;
}