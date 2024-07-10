#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100];
    printf("Enter your word : ");
    fgets(word, 100, stdin);

    int j = 0;
    for (int i = 0, len = strlen(word); i < len ; i++)
    {
        if (isalnum((word[i]))){
            word[j++] = word[i];
        }
    }
    word[j] = '\0';
    
    for (int i = 0, len = strlen(word); i < (len / 2) ; i++)
    {
        if (tolower(word[i]) == tolower(word[len - i - 1]))
        {
            continue;
        }
        printf("False");
        return 1;
    }
    printf("True");
    return 0;
}

