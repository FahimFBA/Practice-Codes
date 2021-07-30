#include <stdio.h>
int main()
{
    int i = 1;
    char ch;
    while (1)
    {
        scanf("%c", &ch);
        if (ch == 'A')
        {
            break;
        }
        else
        {
            printf("Input %d: %c\n", i, ch);
            i++;
            getchar();
        }
    }
    return 0;
}