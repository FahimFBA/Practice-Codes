// from Question2
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    int criteria = 0, i = 0;
    gets(arr);
    int len = strlen(arr);
    if (len >= 8)
    {
        criteria++;
    }
    while (arr[i] != '\0')
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            criteria++;
        }
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            criteria++;
        }
        if (arr[i] == '!' || arr[i] == '@' || arr[i] == '#' || arr[i] == '$' || arr[i] == '%' || arr[i] == '^' || arr[i] == '&' || arr[i] == '*' || arr[i] == '(' || arr[i] == ')' || arr[i] == '+')
        {
            criteria++;
        }
        if (arr[i] >= 0 && arr[i] <= 9)
        {
            criteria++;
        }
        i++;
    }
    if (criteria >= 5)
    {
        printf("Strong Password");
    }
    else
    {
        printf("Weak Password");
    }
    return 0;
}