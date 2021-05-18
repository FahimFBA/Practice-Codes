#include <stdio.h>
int main()
{
    char a, b;
    printf("Enter a:");
    scanf("%c", &a);
    getchar();
    printf("Enter b:");
    scanf("%c", &b);
    printf("A= %c,B=%c", a, b);
}