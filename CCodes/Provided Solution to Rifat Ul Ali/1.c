#include <stdio.h>
#include <stdlib.h>

void strcat(char *str1, char *str2);

int main()
{
    FILE *fptr;

    if ((fptr = fopen("input.txt", "r")) == NULL)
    {
        printf("Error! Can't open the text file!\n");

        exit(1);
    }

    char str1[100], str2[100];
    fscanf(fptr, "%s", &str1);
    fscanf(fptr, "%s", &str2);
    strcat(str1, str2);
    fptr = fopen("output.txt", "w");
    fprintf(fptr, "%s\n", str1);
    fclose(fptr);
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