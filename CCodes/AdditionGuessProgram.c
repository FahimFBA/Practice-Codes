#include<stdio.h>
int main(void)
{
    int answer, count, again;
    for (count=1; count<11; count++)
    {
        printf("What is %d + %d? ", count, count);
        scanf("%d" , &answer);
        if (answer==count+count)
            printf("Right!\n");
        else
        {
            printf("Sorry, you're wrong. \n");
            printf("Try again.\n");
            printf("What is %d + %d? ", count, count);
            scanf("%d" , &answer);
            /* Nested if */
            if (answer==count+count)
                printf("Right!\n");
            else
                printf("Wrong, the correct answer would be: %d\n" , count+count);
        }
    }
    return 0;

}