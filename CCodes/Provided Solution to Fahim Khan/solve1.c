#include <stdio.h>
#include <string.h>

int mystrlen(char s[]);
void mystrrev(char s[]);

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int a = mystrlen(str);
    printf("%d\n", a);
    mystrrev(str);
}

int mystrlen(char s[])
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}
void mystrrev(char s[])
{
    int g, n;
    int temp = 0;

    for (n = 0; s[n] != 0; n++)
        ;
    for (g = 0; g < n / 2; g++)
    {
        temp = s[g];
        s[g] = s[n - 1 - g];
        s[n - 1 - g] = temp;
    }
    for (g = 0; g < n; g++)
        putchar(s[g]);
    printf(" \n ");
}
