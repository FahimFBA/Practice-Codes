    #include <stdio.h>
    #include <string.h>
    
    void check(char [], int); // declaration of the function
    
    int main() // main function. The code will execute from here
    {
        char word[50];
        printf("Enter a string to check: ");
        scanf("%s", word);
        check(word, 0);
        return 0;
    }
    

    void check(char word[], int index)  // user-defined function for checking palindrome
    {
        int len = strlen(word) - (index + 1);
        if (word[index] == word[len])
        {
            if (index + 1 == len || index == len)
            {
                printf("The word is palindrome!\n");
                return;
            }
            check(word, index + 1);
        }
        else
        {
            printf("The word is not palindrome.\n");
        }
    }