#include <stdio.h>
void replace_char(char *str1, char ch1, char ch2)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] == ch1)
        {
            str1[i] = ch2;
        }
        i++;
    }
}

int main()
{
    char str1[100], ch1, ch2;

    printf("Input the string : ");
    gets(str1);

    printf("Input the first character : ");
    ch1 = getchar();

    getchar();

    printf("Input the second character : ");
    ch2 = getchar();

    replace_char(str1, ch1, ch2);

    printf("%s", str1);

    return 0;
}