#include<stdio.h>
int palindrome(int value)
{
    int reverse = 0 , r; 
    if (value != 0)
    {
        r = r % 10;
        reverse = reverse * 10 + r;
        palindrome (value / 10);
    }

    return reverse;
}

int main()
{
    int n, reverse;
    printf("Enter something to check whether it is palindrome or not: \n");
    scanf("%d",&n);
    reverse = palindrome (n);

    if (n == reverse)
    printf("The value is palindrome! \n");

    else 
    printf("The value is not palindrome! \n");

    return 0;
}