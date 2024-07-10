//find the given input is consonant,vowel or special characters. 
#include <stdio.h>
#include <ctype.h>

void main(void)
{
    int VOWELS_SIZE = 5;
    char letter;
    printf("Enter the letter : ");
    scanf("%c", &letter);
    letter = tolower(letter);

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    if(isalpha(letter))
    {
        for (int i = 0; i < VOWELS_SIZE; i++)
        {
            if (letter == vowels[i])
            {
                printf("Vowel");
                return;
            }
        }
        printf("Consonant");
    }
    else if (isdigit(letter))
    {
        printf("Number");
    }
    else
    {
        printf("Special Character");
    }
    
}