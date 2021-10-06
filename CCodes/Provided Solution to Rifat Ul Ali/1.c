#include <stdio.h>
#include<stdlib.h>

void strcat(char *str1, char *str2);

int main()
{
    FILE *fptr;

    if ((fptr = fopen("program.txt", "r")) == NULL)
    {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    char str1[100], str2[100];
    scanf("%s", &str1);
    scanf("%s", &str2);
    strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}

void strcat(char *str1, char *str2)
{
    while (*str1)
    {
        str1++;
    }

    while (*str2)
    {
        *str1 = *str2;
        str2++;
        str1++;
    }

    *str1 = '\0';
}