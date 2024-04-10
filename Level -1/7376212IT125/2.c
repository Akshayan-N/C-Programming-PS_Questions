// 2. find the given input is consonant,vowel or special characters. 
#include <stdio.h>
#include <ctype.h>

#define VOWELS_SIZE 5
void main(void)
{
    char letter;
    printf("Enter the letter : ");
    scanf("%c", &letter);
    letter = tolower(letter);

    char vowels[VOWELS_SIZE] = {'a', 'e', 'i', 'o', 'u'};
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